#include <iostream>
using namespace std;

void cetakPiramida(int baris) //function untuk menampilkan piramida
{for (int i = 1; i <= baris; i++) //perulangan untuk mengatur baris segitiga,didalamnnya ada perulangan lagi untuk mencetak spasi dan bintang
    {for (int spasi = i; spasi < baris; spasi++)
      cout << " ";
    for (int j = 1; j <= i; j++)
      cout << "* ";
    cout << "\n";
  }
}

int main() {
  int baris=0;
  cout << "## Program Piramida Bintang ##\n";
  for (int a=1; a<=30; a++)
  {
      cout << "=";
  }
    cout << "\n";
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
//memanggil function cetak piramida
  cetakPiramida(baris);

  return 0;
}
