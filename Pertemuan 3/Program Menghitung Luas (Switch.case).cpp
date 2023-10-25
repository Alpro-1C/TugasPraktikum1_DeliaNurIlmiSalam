#include <iostream>

using namespace std;
int main() {
    int menu;
    float p,l,t,a,s,Luas;

cout<< "pilih menu:"<<endl;/*kode memilih mau menghitung apa*/
cout<< "[1] Hitung Luas Persegi panjang"<<endl;
cout<< "[2] Hitung Luas Persegi"<<endl;
cout<< "[3] Hitung Luas Segitiga"<<endl;
cout<<endl;

cout<< "Masukkan pilihan:";
cin>>menu;
cout<<endl;
switch (menu){
case 1:/*kode menghitung luas persegi panjang*/
    cout<< "Masukkan nilai panjang:";
    cin>>p;
    cout<< "Masukkan nilai lebar:";
    cin>>l;
    Luas = p*l;
    cout<< "Luas Persegi panjang tersebut adalah:"<<Luas;
    break;

case 2:/*kode menghitung luas persegi*/
    cout<< "Masukkan nilai sisi ";
    cin>>s;
    Luas = s*s;
    cout<<"Luas persegi tersebut adalah:"<<Luas;
    break;

case 3:/*kode menghitung luas segitiga*/
    cout<< "Masukkan nilai alas:";
    cin>>a;
    cout<< "Masukkan nilai tinggi:";
    cin>>t;
    Luas = 0.5*(a*t);
    cout<< "Luas segitiga tersebut adalah:"<<Luas;

    break;
default:
   cout<< "Menu yang anda masukkan tidak tersedia"<<endl;
    break;
}
return 0;
}


