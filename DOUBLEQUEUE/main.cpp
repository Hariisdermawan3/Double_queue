#include <iostream>
#include "DQE.H"
using namespace std;

#define N 10
int Q[N];
int L, R, X;


int main(void)
{
    AWAL();
    int Pilihan = 0;
    while (Pilihan != 6)
    {
        Pilihan = menu();
        switch (Pilihan)
        {
        case 1:
            INSERT_KIRI();
            break;
        case 2:
            INSERT_KANAN();
            break;
        case 3:
            DELETE_KIRI();
            break;
        case 4:
            if (DELETE_KANAN())
            {
                cout << "Nilai Yang Diambil: " << X << endl;
            }
            else
            {
                cout << "Gagal Mengambil Nilai" << endl;
            }
            break;
        case 5:
            cout << "Tampilkan" << endl;
            Tampilkan();
            break;
        case 6:
            cout << "Berhasil Keluar, Terimakasih :) " << endl;
            break;
        default:
            cout << "Pilihan Yang Anda Masukan Salah" << endl;
        }
    }

    return 0;
}
