//Buatlah program untuk menghitung luas persegi dan persegi panjang dengan menggunakan perulangan do while. 
// Program akan meminta input sisi, panjang, dan lebar. 
// Kemudian program akan menampilkan menu untuk memilih apakah ingin menghitung luas persegi atau luas persegi panjang. 
// Setelah menampilkan hasil, program akan menanyakan apakah ingin menghitung lagi atau tidak.

#include <iostream>
using namespace std;

int main () {
    float sisi, panjang, lebar;
    int pilihan;
    char ulang;


    do{
    //input data yang akan dipakai
    cout << "Hi yutub welkam to my guysss" <<endl;
    cout << " ===== INPUT DATA ===== " <<endl;
    cout << " Masukkan sisi : " <<endl;
    cin >> sisi;
    cout << " Masukkan panjang : " <<endl;
    cin >> panjang;
    cout << " Masukkan lebar : " <<endl;
    cin >> lebar;

    //pilih bentuk yang akan dijalankan (luas mana yang akan dipilih)
    cout << " ===== PILIH LUAS ===== " <<endl;
    cout << "1. Luas Persegi" <<endl;
    cout << "2. Luas Persegi Panjang" <<endl;
    cout << "(Pilihan 1/2) :" <<endl;
    cin >>pilihan;

    //proses perhitungannya dan hasilnya 
    cout << " ===== HASIL LUAS ===== " <<endl;
    if (pilihan == 1) {
        cout << "Luas Persegi :" << sisi * sisi <<endl;
    } else if (pilihan == 2) {
        cout << "Luas Persegi Panjang :" << panjang * lebar <<endl;
    } else {
        cout << "Pilih yang bener dong cmiwws!" <<endl;
    }

    //buat milih lagi klo pengen yang lain
    cout << " Mau milih lagi yey or ney (y or n)?" <<endl;
    cin >> ulang;

} while (ulang == 'y' || ulang == 'Y');

cout << "Thanks udh mo make yakss cmiwww!!!" <<endl;

    return 0;

}