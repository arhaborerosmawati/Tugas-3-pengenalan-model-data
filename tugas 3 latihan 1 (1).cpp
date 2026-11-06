#include <iostream>
#include <string>
using namespace std;

int main()
{
    string npm, nama;
    float nilai1, nilai2, nilai3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << endl;

    cout << "NPM             : ";
    getline(cin, npm);

    cout << "Nama            : ";
    getline(cin, nama);

    cout << "Nilai Tugas I   : ";
    cin >> nilai1;

    cout << "Nilai Tugas II  : ";
    cin >> nilai2;

    cout << "Nilai Tugas III : ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << endl;
    cout << "NPM " << npm << ", Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata
         << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}