#include <iostream>
using namespace std;

double tambah(double a, double b){
    return a + b;
}

double kurang(double a, double b){
    return a - b;
}

double kali(double a, double b){
    return a * b;
}

double bagi(double a, double b){
    if (b == 0) {
        cout << "Tidak bisa menggunakan angka nol "<<endl;
        return 0;
    }
    return a / b;
}

int main() {
    double angka1, angka2, hasil;
    char operasi;

    cout << "======== KALKULATOR SEDERHANA ========"<<endl;
    cout << "Masukkan Angka Pertama : "<<endl;;
    cin >> angka1;
    cout << "Pilih Operasi (+, -, *, /) : "<<endl;
    cin >> operasi;
    cout << "Masukkan Angka Kedua : "<<endl;
    cin >> angka2;

    switch (operasi){
        case '+':
            hasil = tambah(angka1, angka2);
            cout << "Hasil : " << hasil <<endl;
            break;
        case '-':
            hasil = kurang(angka1, angka2);
            cout << "Hasil : " << hasil <<endl;
            break;
        case '*':
            hasil = kali(angka1, angka2);
            cout << "Hasil : " << hasil <<endl;
            break;
        case '/':
            if (angka2 != 0) {
                hasil = bagi(angka1, angka2);
                cout << "Hasil : " << hasil <<endl;
            } else {
                bagi(angka1, angka2); 
            }
            break;
        default:
            cout << "Operasi Tidak Valid! "<<endl;
    }

    return 0;
}


