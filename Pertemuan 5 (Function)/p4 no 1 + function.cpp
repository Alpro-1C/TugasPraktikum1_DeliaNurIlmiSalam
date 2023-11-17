#include <iostream>
using namespace std;
/*function untuk mencetak garis horizontal sepanjang 42 char*/
void garis()
{/*menggunakan looping for agar lebih efisien*/
    for (int i=1;i<=42;i++)
    {cout << "=";}
    cout << "\n";
}

/*function untuk mencetak judul*/
void judul(string judul)
{   garis();
    cout << judul << "\n";
    garis();
}

/*function untuk menampilkan pilihan menu yang tersedia*/
void MenuOpsi()
{
    cout << "|1.Bilangan Genap dan jumlahnya          |"<<"\n";
    cout << "|2.Bilangan Ganjil dan jumlahnya         |"<<"\n";
    cout << "|3.Bilangan Prima dan jumlahnya          |"<<"\n";
    garis();

}

/*function untuk mencetak bilangan genap dengan parameter batas dan sumGenap*/
void genap(int batas, int &sumGenap)
{
    cout << "Bilangan Genap antara 1 sampai " << batas << " adalah:";
    for (int i=1; i<=batas; i++)
       {
        if (i%2==0)
        {cout << i;
         sumGenap += i;
        }

       else
        {
           cout<<" ";
        }
       }
}

/*function untuk mencetak bilangan ganjil dengan parameter batas dan sumGanjil*/
void ganjil (int batas,int &sumGanjil)
{   cout << "Bilangan Ganjil antara 1 sampai "<< batas << " adalah:";
    for (int i=1; i<=batas ; i++)
        {
            if (i%2 != 0)
            {
                cout << i;
                sumGanjil += i;
            }
            else
            {
                cout << " ";
            }
        }
}

/*function untuk mencetak bilangan genap dengan parameter batas dan sumPrima*/
void prima(int batas, int &sumPrima)
{
    cout << "Bilangan Prima antara 1 sampai " << batas << " adalah:";
       for (int i = 2; i <= batas; i++) {
        bool Prima = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                Prima = false;
                break;
            }
        }
        if (Prima) {
            cout << i << " ";
            sumPrima += i;
        }
    }
}

/*function untuk mencetak faktor dari sumGenap*/
void faktorGenap (int sumGenap)
{   cout << "Faktor dari Jumlah Bilangan Genap:";
    for(int i = 1; i <= sumGenap; ++i)
        {
        if(sumGenap % i == 0)
            cout << i << " ";
        }
}

/*function untuk mencetak faktor dari sumGanjil*/
void faktorGanjil(int sumGanjil)
{
    cout << "Faktor dari jumlah bilangan ganjil tersebut adalah:";
    for(int y = 1; y <= sumGanjil; ++y) {
        if(sumGanjil % y == 0)
            cout << y << " ";
    }
}

/*function untuk mencetak faktor dari sumPrima*/
void faktorPrima(int sumPrima)
{cout << "Faktor Dari Jumlah Bilangan Prima:";
        for(int z = 1; z <= sumPrima; ++z) {
        if(sumPrima % z == 0)
            cout << z << " ";
    }
}

int main ()
{   int pil,batas,sumGenap=0, sumGanjil=0, sumPrima=0;
    char yn;
/*Menggunakan perulangan do while agar program  dijalankan sekali lalu akan diulangi lagi ketika kondisi di while terpenuhi*/
    do {
/*Memanggil function judul dan menuOpsi*/
    judul("Program Bilangan Genap,Ganjil,Prima");
    MenuOpsi();
    cout << "Masukkan pilihan anda:";
    cin >> pil;
    cout << "\n";
/*dibuat switch case agar user dapat memilih program mana yang diinginkan*/
    switch (pil)
   {case 1 :
       judul("Bilangan Genap");
       cout << "Masukkan batas bilangan:";
       cin >> batas;
       /*Memanggil function genap*/
       genap(batas, sumGenap);
       cout << "\n";
       cout << "Jumlah Bilangan Genap:" <<sumGenap << "\n";
       /*Memanggil function faktorGenap*/
       faktorGenap(sumGenap);
    break;

    case 2:
        judul("Bilangan Ganjil");
        cout << "Masukkan batas bilangan:";
        cin >> batas;
        /*Memanggil function ganjil*/
        ganjil (batas, sumGanjil);
        cout << "\n";
        cout << "Jumlah bilangan Ganjil:" <<sumGanjil<< "\n";
        /*Memanggil function faktorGanjil*/
        faktorGanjil(sumGanjil);
    break;

    case 3:
        judul("Bilangan Prima");
        cout << "Masukkan batas Bilangan:";
        cin >> batas;
        /*Memanggil function prima*/
        prima (batas, sumPrima);
        cout << "\n";
	    cout << "Jumlah Bilangan Prima:"<< sumPrima << "\n";
	    /*Memanggil function faktorPrima*/
        faktorPrima(sumPrima);
    break;

    default:
    cout<< "Pilihan yang anda masukkan tidak tersedia"<<endl;
    break;
    }

    cout << "\n\n";
    cout << "Apakah anda ingin memilih lagi?(Y/N):";
    cin >> yn;
}
while (yn == 'y' || yn == 'Y');
/*jika kondisi di while tidak terpenuhi,maka program akan berhenti melakukan perulangan dan lanjut ke cout di bawah*/
cout << "\n" << "Program Selesai.Terimakasih !";

return 0;

}
