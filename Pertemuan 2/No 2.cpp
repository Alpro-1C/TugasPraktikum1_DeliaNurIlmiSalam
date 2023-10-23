#include <iostream>

using namespace std;

int main()
{int N, M;

    cout << "Bebek Pak Tatang:" ;
    cin >> N;

    cout << "Dibagikan Kepada Temannya:" ;
    cin >> M;

    int jumlahBebekYangAkanDibagikan = N/M;
    int sisaBebek = N%M;

    cout << "jumlah bebek yang akan diberikan kepada masing masing temannya:" << jumlahBebekYangAkanDibagikan << endl;
    cout << "jumlah sisa bebek:" << sisaBebek;



    return 0;
}
