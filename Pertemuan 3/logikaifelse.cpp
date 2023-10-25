#include <iostream>

using namespace std;


int main() {
    int N;

    cout<< "Nilai score:";
    cin>> N;

    if(N>=90) {
        cout<< "Selamat!Anda mendapatkan nilai A"<<endl;
    }
    else if(N>=80&&N<=89) {
        cout<< "Anda mendapatkan nilai B"<<endl;
    }
    else if(N>=70&&N<=79) {
        cout<< "Anda mewndapatkan nilai C"<<endl;
    }
    else if(N>=60&& N<=69) {
        cout<< "Anda mendapatkan nilai D"<<endl;
    }
    else if (N<60) {
        cout<< "Anda mendapatkan nilai E"<<endl;

    }


return 0;
}

