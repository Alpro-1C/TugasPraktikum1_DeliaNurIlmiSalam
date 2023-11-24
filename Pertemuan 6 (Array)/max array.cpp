#include<iostream>

using namespace std;

void garis()
{
    for (int i=1; i <= 35 ; i++)
    {
        cout << "=";
    }
    cout << "\n";
}

void header()
{
    garis();
    cout << "| Program Mencari Nilai Max Array |\n";
    garis();

}


int main()
{   int i;
    header();

    int n;
    cout << "Input jumlah Elemen Array :";
    cin >> n;

    int arr[n];

    cout << "Silakan input " << n << " nilai untuk diisi ke dalam Array\n";

    for (int i =0; i < n; ++i) // perulangan untuk menyimpan nilai array yang diinput user
        {cout << "Nilai ke-" << i + 1 << ":";
        cin >> arr[i];
        }

    // perulangan untuk mencari nilai terbesar yang terdapat dalam array dan indeksnya
    int maxArray = arr[0]; //array dengan indeks 0 dijadikan max sementara
    int indeksMax = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > maxArray) //kondisi dimana jika nilai arr[i] lebih besar dari max sementara, maka nilainya akan ditukar. begitu seterusnya sampai ketemu nilai arr mana yang paling besar
        {
            maxArray = arr[i];
            indeksMax = i;
        }
    }

    cout << "Nilai tertinggi Adalah " << maxArray << " dan terdapat dalam indeks " << indeksMax << " array";


    return 0;
}
