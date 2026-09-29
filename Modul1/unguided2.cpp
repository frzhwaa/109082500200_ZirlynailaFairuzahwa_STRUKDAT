#include <iostream>
using namespace std;

int main(){
    int angka, puluhan, satu;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"
    };
    if (angka >= 0 && angka <= 9) {
        cout << satuan[angka];
    } else if (angka == 10) {
        cout << "sepuluh";
    } else if (angka == 11) {
        cout << "sebelas";
    } else if (angka >= 12 && angka <= 19) {
        cout << satuan[angka - 10] << " belas";
    } else if (angka >= 20 && angka <= 99) {
        puluhan = angka / 10;
        satu = angka % 10;
        cout << satuan[puluhan] << " puluh";
        if (satu != 0) {
            cout << " " << satuan[satu];
        }
    } else if (angka == 100) {
        cout << "seratus";
    } else {
        cout << "Angka harus 0 sampai 100";
    }
    return 0;
}