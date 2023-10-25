#include <iostream>

using namespace std;

int main() {
    int A,B,C;

    cout<< "Masukkan Angka kesatu:"; /*program input angka*/
    cin>>A;

    cout<< "Masukkan Angka kedua:";
    cin>>B;

    cout<< "Masukkan Angka ketiga:";
    cin>>C;

int max; /*buat variabel untuk menyimpan nilai terbesar*/

if (A>=B && A>=C){ /*Pengkondisian*/
    max = A;
}
else if (B>=A && B>=C) {
    max = B;
}
else if (C>=A && C>=B) {
    max = C;
}
cout<< "Angka terbesar adalah:"<<max;

return 0;
}
