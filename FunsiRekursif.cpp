#include <iostream>
using namespace std;

double pangkat(double a, int b) {
    if (b == 0) {
        return 1;
    }
    else {
        return a * pangkat(a, b - 1);
    }
}


int main() {
    double bilangan;
    int angkaPangkat;

    cout << "======= Fungsi Rekursif Pangkat ======"<<endl;
    cout << "Masukkan Jumlah Angka : "<<endl;;
    cin >> bilangan;

    cout << "Masukkan Angka Pangkat : "<<endl;
    cin >> angkaPangkat;

    if (angkaPangkat < 0) {
        cout << "Harus Menggunakan Angka Positif "<<endl;
    } else {
        double hasil = pangkat(bilangan, angkaPangkat);
        cout << "Hasil dari " << bilangan << " ^ " << angkaPangkat << " adalah : " << hasil <<endl;
    }

    return 0;
}


