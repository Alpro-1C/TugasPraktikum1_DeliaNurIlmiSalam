#include<iostream>
using namespace std;

int main()
{
  cout << "##  Program C++ Deret Fibonacci  ##" << endl;
  cout << "===================================" << endl;
  cout << endl;

  int n, t1 = 0, t2 = 1, angkaBerikutnya = 0;

    cout << "Masukan Jumlah deret fibonacci yang diinginkan: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // Tampilkan 2 angka pertama
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        // Hitung untuk angka ke 3 dan seterusnya
        angkaBerikutnya = t1 + t2;
        t1 = t2;
        t2 = angkaBerikutnya;

        cout << angkaBerikutnya << " ";
    }

  cout << endl;
  return 0;
}
