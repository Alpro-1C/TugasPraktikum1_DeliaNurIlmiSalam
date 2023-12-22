#include <iostream> //library yang digunakan
using namespace std;

struct Mahasiswa   //struktur mahasiswa yang terdiri dari nama,prodi,npm,semester,kelas,dan jenis kelamin(JK)
{
    string nama, prodi; //menggunakan tipe data string karena berupa huruf dengan char lebih dari 1
    long long  npm; //menggunakan tipe data long long karena memuat angka lebih dari 10 digit angka atau tepatnya 13 digit angka
    int semester; //menggunakan tipe data integer untuk variabel semester
    char kelas,JK; //menggunakan tipe data char untuk variabel kelas dan JK
};

const int maxMahasiswa = 100;//jumlah maksimal mahasiswa yang bersifat const atau nilai nya tidak akan berubah
int jumlahMahasiswa = 0; //jumlah mahasiswa saat ini
Mahasiswa dataMahasiswa[maxMahasiswa];//array untuk menyimpan data mahasiswa dengan tipe data Mahasiswa,dimana Mahasiswa ini merupakan struct

void garis()  //fungsi untuk mencetak garis horizontal sepanjang 73 char
{
    for (int i=0; i<73; i++) //perulangan untuk membuat garis garis variasi menggunakan "="
    {
        cout << "=";
    }
    cout << "\n";
}
void menu ()  //fungsi untuk menampilkan menu apa saja yang tersedia
{
    garis();
    cout << "|\t\t\t\t KELOMPOK 6 \t\t\t\t|\n";
    garis();
    cout << "|\t Sistem Manajemen Data Mahasiswa Fakultas Ilmu Komputer \t|\n";
    cout << "|\t\t Universitas Singaperbangsa Karawang \t\t\t|\n";
    garis();
    cout << "| 1. Tambah Mahasiswa\t\t\t\t\t\t\t|\n"; //menu pertama yaitu menu tambah mahasiswa,dimana user dapat menambahkan data mahasiswa jika memilih menu ini
    cout << "| 2. Tampilkan Mahasiswa\t\t\t\t\t\t|\n"; //menu kedua yaitu menu tampilkan data mahasiswa,dimana pada menu ini user dapat melihat data yang tersimpan dalam sistem
    cout << "| 3. Cari Mahasiswa\t\t\t\t\t\t\t|\n"; //menu ketiga yaitu menu untuk mencari data mahasiswa dan menampilkannya jika ditemukan
    cout << "| 4. Edit Data Mahasiswa\t\t\t\t\t\t|\n"; //menu keempat yaitu menu untuk mengedit data mahasiswa
    cout << "| 5. Keluar\t\t\t\t\t\t\t\t|\n"; //menu keluar dari program
    garis();
}

void tambahDataMahasiswa() //fungsi untuk menambahkan data mahasiswa
{
    char pil; //deklarasi variabel pil dengan tipe data berupa char
 do{ //menggunakan perulangan do while agar kode dijalankan sekali lalu akan dijalankan ketika kondisi di while terpenuhi
    if (jumlahMahasiswa < maxMahasiswa) //pengkondisian dimana jika jumlah mahasiswa lebih kecil dari max mahasiswa maka akan menjalankan kode dibawah
    {
        Mahasiswa mahasiswaBaru; //variabel baru dengan tipe data Mahasiswa
        garis();
        cout << "|\t\t Menu Tambah Data Mahasiswa \t\t\t\t|\n";
        garis();
        cout << "Masukkan Nama Mahasiswa\t\t\t:";//meminta pengguna menginput nama mahasiswa
        cin.ignore(); //digunakan untuk mengabaikan karakter tertentu dalam buffer input
        getline(cin, mahasiswaBaru.nama); //digunakan agar komputer bisa membaca satu garis penuh input termasuk spasi dan menyimpannya sebagai nama mahasiswa baru
        cout << "Masukkan jenis kelamin mahasiswa(P/L)   :"; //meminta pengguna menginput jenis kelamin mahasiswa
        cin >> mahasiswaBaru.JK; // input jenis kelamin
        cout << "Masukkan NPM mahasiswa\t\t\t:";//meminta pengguna menginput NPM mahasiswa
        cin >> mahasiswaBaru.npm; //input npm
        cout << "Masukkan Prodi Mahasiswa\t\t:";//meminta pengguna menginput program studi mahasiswa
        cin.ignore();
        getline(cin, mahasiswaBaru.prodi); //input prodi
        cout << "Masukkan Semester Mahasiswa\t\t:";//meminta pengguna menginput semester mahasiswa
        cin >> mahasiswaBaru.semester; //input semester
        cout << "Masukkan Kelas Mahasiswa\t\t:";//meminta pengguna menginput kelas mahasiswa
        cin >> mahasiswaBaru.kelas;//input kelas

        dataMahasiswa[jumlahMahasiswa]= mahasiswaBaru;//membuat perulangan dari jumlah mahasiswa yang akan di inputkan yang disimpan dalam array dengan jumlah maks 100 mahasiswa
        jumlahMahasiswa++;

        cout << "Data Mahasiswa berhasil ditambahkan.\n";
        garis();
        cout << "Apakah anda ingin menambahkan data mahasiswa lagi?(Y/N):"; //membuat pilihan untuk melanjutkan program atau berhenti dari program
        cin >> pil; //input berupa var pil dengan tipe data char
        cout << "\n\n";
    }
    else
    {
        cout << "Jumlah maksimum mahasiswa telah tercapai"; //mengeluarkan output apabila jumlah maksimal biodata mahasiswa yang diinputkan lebih dari 100
        cout << "\n";
    }
 } while (pil == 'Y' || pil == 'y'); //membuat perulangan dari pilihan y/n diatas
}




void tampilDataMahasiswa() //fungsi untuk menampilkan data mahasiswa
{
    garis();
    cout << "|\t\t\t Data Mahasiswa \t\t\t\t|\n";
    garis();
    if (jumlahMahasiswa == 0) //pengkondisian apabila pengguna belum menginputkan biodata mahasiswa
    {
        cout << "Tidak ada mahasiswa dalam sistem.\n\n";
    }
    else
    {
        cout << "Daftar Mahasiswa:\n";
        for (int i = 0; i < jumlahMahasiswa; i++) //perintah menjalankan biodata mahasiswa berulang-ulang hingga akhir jumlah biodata mahasiswa yang sudah diinputkan
        {
            garis();
            cout << "Nama\t\t   : " << dataMahasiswa[i].nama << "\n"; //memanggil data nama mahasiswa yang sudah diinputkan sebelumnya
            cout << "Jenis Kelamin(P/L) : " <<dataMahasiswa[i].JK << "\n"; //memanggil data jenis kelamin mahasiswa yang sudah diinputkan sebelumnya
            cout << "NPM\t\t   : " << dataMahasiswa[i].npm << "\n"; //memanggil data npm mahasiswa yang sudah diinputkan sebelumnya
            cout << "Prodi\t\t   : "<< dataMahasiswa[i].prodi << "\n"; //memanggil data prodi mahasiswa yang sudah diinputkan sebelumnya
            cout << "Semester\t   : " << dataMahasiswa[i].semester << "\n"; //memanggil data semester mahasiswa yang sudah diinputkan sebelumnya
            cout << "Kelas\t\t   : "<< dataMahasiswa[i].kelas << "\n"; //memanggil data kelas mahasiswa yang sudah diinputkan sebelumnya
        }
    }
     cout << "\n";
}

void cariDataMahasiswa(long long cariNpm)//fungsi untuk mencari data mahasiswa dengan parameter cariNpm dimana cariNpm ini bertipe data longlong
{
    bool ada = false; //menggunakan operasi bool untuk mencari data mahasiswa
    for (int i=0; i < jumlahMahasiswa; i++)//perintah yang dijalankan apabila data npm ada
    {
        if (dataMahasiswa[i].npm == cariNpm) //membuat pengkondisian untuk mencari npm dengan mengambil data dalam array
        {
            garis();
            cout << "Mahasiswa ditemukan.\n";//jika ada akan menampilkan biodata dari mahasiswa dengan npm yang dicari
            garis();
            cout << "Nama\t\t : " << dataMahasiswa[i].nama << "\n";
            cout << "Jenis Kelamin    : " << dataMahasiswa[i].JK << "\n";
            cout << "NPM\t\t : " << dataMahasiswa[i].npm << "\n";
            cout << "Prodi\t\t : "<<dataMahasiswa[i].prodi << "\n";
            cout << "Semester\t : " <<dataMahasiswa[i].semester << "\n";
            cout << "Kelas\t\t : "<<dataMahasiswa[i].kelas << "\n";
            cout << "\n";
            ada = true;
        }
    }
    if (!ada) //pengkondisian jika data mahasiswa yang dicari tidak ada, maka akan mengekseskusi kode dibawah
    {
        cout << "Mahasiswa dengan Npm " << cariNpm << " tidak ditemukan.\n";
    }
     cout << "\n";
}

void editDataMahasiswa(long long editNpm) //fungsi untuk mengedit data mahasiswa dengan parameter bertipe data long long
{
    bool ada = false;//menggunakan operasi bool untuk mengedit data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++)//perulangan untuk mencari data mahasiswa dengan npm yang diinputkan. perulangan dimulai dari i = 0 hingga i mencapai nilai <  jumlahMahasiswa
    {
        if (dataMahasiswa[i].npm == editNpm) //Pengecekan apakah NPM mahasiswa pada indeks ke-i sama dengan NPM yang ingin diubah
        {
            garis();
            cout << "Mahasiswa ditemukan.\n"; //jika iya, maka data dari mahasiswa ke-i akan ditampilkan
            cout << "Nama\t\t : " << dataMahasiswa[i].nama << "\n";
            cout << "Jenis Kelamin    : " << dataMahasiswa[i].JK << "\n";
            cout << "NPM\t\t : " << dataMahasiswa[i].npm << "\n";
            cout << "Prodi\t\t : "<< dataMahasiswa[i].prodi << "\n";
            cout << "Semester\t : " << dataMahasiswa[i].semester << "\n";
            cout << "Kelas\t\t : " << dataMahasiswa[i].kelas << "\n";
            garis();
            cout << "Data apa yang ingin anda ubah?"; //kita menanyakan kepada user data apa yang ingin diubah
            do{//menggunakan perulangan do-while agar statement dijalankan sekali lalu akan dijalankan lagi ketika kondisi di while terpenuhi
            char ubahData;//deklarasi variabel ubahData dengan tipe data char
            cout << "\n";
            cout << "A. Nama\n";//menu data mana yang akan diubah
            cout << "B. Jenis Kelamin\n";
            cout << "C. NPM\n";
            cout << "D. Prodi\n";
            cout << "E. Semester\n";
            cout << "F. Kelas\n";
            cout << "G. Semua Data\n";
            cout << "Masukkan Pilihan(A/B/C/D/E/F/G):";//user diminta menginput pilihan data mana yang ingin diubah,
            cin >> ubahData; //inputan berupa char dengan nama variabel ubahData
            if(ubahData == 'A'|| ubahData == 'a'){ //Pengkondisian dimana jika pilihan user == 'A' atau 'a', maka data yang akan diubah adalah data bagian nama mahasiswa
                cout << "Masukkan Nama Mahasiswa:";
                cin.ignore();
                getline(cin, dataMahasiswa[i].nama); // Mengambil input untuk nama mahasiswa dan menyimpannya dalam array dataMahasiswa ke i
                ada = true; //ada=true jika berhasil mengubah data dan tidak akan lanjut ke pengkondisian selanjutnya
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData == 'B' || ubahData == 'b'){ //Pengkondisian dimana jika pilihan user == 'B' atau 'b', maka yang diubah adalah data bagian jenis kelamin mahasiswa
                cout << "Masukkan Jenis kelamin mahasiswa(P/L):";
                cin >> dataMahasiswa[i].JK; // Mengambil input untuk jenis kelamin mahasiswa dan menyimpannya dalam array dataMahasiswa ke i
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData == 'C' || ubahData == 'c'){ //Pengkondisian dimana jika pilihan user == C atau pilihan user == 'c', maka yang diubah adalah data bagian NPM mahasiswa
                cout << "Masukkan NPM Mahasiswa:";
                cin >> dataMahasiswa[i].npm;
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData == 'D' || ubahData == 'd'){ //Pengkondisian dimana jika pilihan user == 'D' atau 'd', maka yang diubah adalah data bagian prodi mahasiswa
                cout << "Masukkan Prodi Mahasiswa:";
                cin >> dataMahasiswa[i].prodi;
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData == 'E'|| ubahData == 'e'){ //Pengkondisian dimana jika pilihan user == 'E' atau 'e', maka yang diubah adalah data bagian semester mahasiswa
                cout << "Masukkan Semester Mahasiswa:";
                cin >> dataMahasiswa[i].semester;
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData == 'F'|| ubahData == 'f'){ //Pengkondisian dimana jika pilihan user == 'F' atau 'f', maka yang diubah adalah data bagian kelas mahasiswa
                cout << "Masukkan kelas mahasiswa:";
                cin >> dataMahasiswa[i].kelas;
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else if (ubahData =='G'|| ubahData == 'g'){  //Pengkondisian dimana jika pilihan user == 'G' atau 'g', maka yang diubah adalah semua data mahasiswa
                cout << "Masukkan Nama Mahasiswa:";//meminta pengguna menginput nama mahasiswa
                cin.ignore();
                getline(cin, dataMahasiswa[i].nama); //digunakan agar komputer bisa membaca satu garis penuh input termasuk spasi dan menyimpannya sebagai nama mahasiswa baru
                cout << "Masukkan Jenis kelamin mahasiswa(P/L):"; //meminta pengguna menginput jenis kelamin mahasiswa
                cin >> dataMahasiswa[i].JK; //
                cout << "Masukkan NPM mahasiswa:";//meminta pengguna menginput NPM mahasiswa
                cin >> dataMahasiswa[i].npm;
                cout << "Masukkan Prodi Mahasiswa:";//meminta pengguna menginput program studi mahasiswa
                cin >> dataMahasiswa[i].prodi;
                cout << "Masukkan Semester Mahasiswa:";//meminta pengguna menginput semester mahasiswa
                cin >> dataMahasiswa[i].semester;
                cout << "Masukkan Kelas Mahasiswa:";//meminta pengguna menginput kelas mahasiswa
                cin >> dataMahasiswa[i].kelas;
                ada = true;
                cout << "Data Mahasiswa berhasil diubah.\n";}
            else{ //pengkondisian jika pilihan tidak valid, maka akan meng cout kata di bawah dan kembali ke menu bagian pilh data mana yang ingin diubah
                cout << "Masukkan pilihan yang benar.\n";}
            }while (!ada);//program akan trus dijalankan selama kondisinya !ada
        }
    }
    if (!ada){ //pengkondisian dimana jika mahasiswa dengan NPM yang ingin diedit tidak ada dalam sistem
        cout << "Mahasiswa dengan NPM " << editNpm << " tidak ditemukan.\n";//statement yang akan dijalankan jika npm tidak ada
    }
    cout << "\n";
}

int main()//fungsi utama
{
    while(true)//perulangan dimana program akan terus berjalan selama kondisinya true
    {
        menu(); //memanggil fungsi menu
        cout << "Masukkan Pilihan Menu (1/2/3/4/5):";//perintah untuk menginputkan pilihan 1 hingga 5
        int menu; //deklarasi variabel menu dengan tipe data int
        cin >> menu; //input berupa variabel menu
        cout <<"\n";

        switch(menu)//perintah yang dijalankan dari inputan di atas
        {
        case 1: // statement yang akan dijalankan apabila user menginputkan "1"
            tambahDataMahasiswa(); //memanggil fungsi tambahDataMahasiswa
            break;

        case 2: // statement yang akan dijalankan apabila user menginputkan "2"
            tampilDataMahasiswa(); //memanggil fungsi tampilDataMahasiswa
            break;

        case 3: //statement yang akan dijalankan apabila user menginputkan "3"
            long long cariNpm;
            garis();
            cout << "|\t\t\t Menu Pencarian Data Mahasiswa \t\t\t|\n";
            garis();
            cout << "Masukkan Npm mahasiswa yang dicari: ";//perintah kepada user agar menginputkan npm mahasiswa yang dicari
            cin >> cariNpm; //inputan berupa variabel cariNpm
            cariDataMahasiswa(cariNpm); //memanggil fungsi cariDataMahasiswa dengan nilai yang diinputkan user
            break;

        case 4: //statement yang akan dijalankan apabila user menginputkan "4"
            long long editNpm;
            garis();
            cout << "|\t\t\t Menu Edit Data Mahasiswa \t\t\t|\n";
            garis();
            cout << "Masukkan Npm mahasiswa yang ingin diubah: "; //perintah kepada user agar menginputkan npm mahasiswa yang ingin diubah
            cin >> editNpm; //input berupa variabel editNpm
            editDataMahasiswa(editNpm); //memanggil fungsi editDataMahasiswa
            break;

        case 5://statement yang akan dijalankan apabila user menginputkan "5"
            cout << "Apakah anda yakin ingin keluar dari program?(Y/N):"; //konfirmasi ke user apakah benar ingin keluar atau tidak
            char exit;
            cin >> exit;
            if (exit == 'N'||exit == 'n'){//pengkondisian jika pilihan user N atau n, maka akan kembali ke menu
                cout <<"Anda memilih untuk tetap berada di program.\n";
            }
            else if (exit =='Y' || exit== 'y'){//pengkondisian jika pilihan user Y atau y, maka program akan berhenti
                cout <<"Anda telah keluar dari program. Terimakasih!\n";
                return 0; //menunjukan program berhasil dieksekusi sampai akhir
            }
            break;
         default: //output yang akan keluar apabila user menginputkan angka diluar perintah
            cout << "Pilihan tidak valid. Coba lagi!\n";
        }
    }
return 0; //menunjukan program berhasil dieksekusi sampai akhir
}
