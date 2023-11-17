#include <iostream>
using namespace std;

void garis(){
    for (int i=1; i<=30; i++)
    {
        cout<<"_" ;
    }
    cout << "\n";

}

void judul(string judul)
{
    cout << judul << "\n";
    garis();
}
int Fibonacci (int n){
    //jika n == 0 atau n==1 maka fungsi akan mengembalikan nilai
    if (n == 0 || n == 1) {
            return n;
    }
    // jika tidak, fungsi akan memanggil dirinya sendiri (rekursi)
    else {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}


int main()
{
    int n;

    judul("## Program Deret Fibonacci ##");
    do { //menggunakan perulangan do-while untuk memastikan input yang valid
    cout << "Banyak Deret yang diinginkan:";
    cin >> n;
     if (n <= 0) {
            cout << "Masukkan jumlah deret yang valid (harus lebih dari 0).\n\n";
        }

    }
    while (n <= 0); //perulangan akan terus dilakukan selama input yang dimasukkan belum valid atau n<=0

    cout << n << " Deret Bilangan Fibonacci:\n";
    // perulangan untuk memanggil fungsi fibonacci sebanyak n
    for (int i = 0; i < n; i++){
       cout << Fibonacci(i);
       cout << " ";
    }

    return 0;
}
