#include <iostream>
#include <string>
using namespace std;

int main() {
    int batas;
    int sumganjil= 0;
    int sumgenap= 0;
    int sumprima=0;
    string genap, ganjil; /*menggunakan string karena biar bisa sekaligus menentukan ganjil genap dalam satu loopingan*/
    cout << "Masukkan batas: "; cin >> batas;


    for (int i = 1; i <= batas; i++) { /*looping di dalamnya ada if benar= genap else=ganjil dan jumlahnya*/
        if (i % 2 == 0) {
            genap += " " + to_string(i);
            sumgenap += i;
        }else{
            ganjil += " " + to_string(i);
            sumganjil += i;
        }
    }
    cout << "Bilangan Genap:" << genap;
    cout << "\nJumlah Bilangan Genap: " << sumgenap;
    cout << "\nFaktor dari " <<sumgenap<<" adalah : ";
    for(int i = 1; i <= sumgenap; ++i) { /*loopingan menentukan faktor dari jumlah bilangan genap*/
        if(sumgenap % i == 0)
            cout << i << " ";
    }
    cout << "\nBilangan Ganjil:"<< ganjil;
    cout << "\nJumlah Bilangan Ganjil: " <<sumganjil;
    cout << "\nFaktor dari " << sumganjil<<" adalah : ";
    for(int i = 1; i <= sumganjil; ++i) { /*loopingan menentukan faktor dari jumlah bilangan ganjil*/
        if(sumganjil % i == 0)
            cout << i << " ";
    }


    cout << "\nBilangan Prima: "; /*loopingan menentukan bilangan prima dan jumlahnya*/
    for (int i = 2; i <= batas; i++) {
        bool isPrima = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrima = false;
                break;
            }
        }
        if (isPrima) {
            cout << i << " ";
            sumprima += i;
        }
    }
    cout << "\nJumlah Bilangan Prima: "<< sumprima;
    cout << "\nFaktor dari " << sumprima << " adalah : ";
    for(int i = 1; i <= sumprima; ++i) { /*loopingan untuk menentukan faktor dari jumlah bilangan prima*/
        if(sumprima % i == 0)
            cout << i << " ";
    }

    return 0;
}
