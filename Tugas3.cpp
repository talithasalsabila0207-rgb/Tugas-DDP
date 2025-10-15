#include <iostream>
using namespace std;

int main() {

    //doubele harga = 1000.0; // Harga barang
    //doubele persentaseDiskon1 = 70.0; // Persentase diskon (misalnya 10%)
    //doubele persentaseDiskon2 = 20.0; // Persentase diskon (misalnya 10%)

    double harga; // Harga barang
    double persentaseDiskon1; // Persentase diskon (misalnya 10%)
    double persentaseDiskon2; // Persentase diskon (misalnya 10%)

    cout << "Masukan harga barang : ";
    cin >> harga;

    cout << "Masukan harga diskon pertama: ";
    cin >> persentaseDiskon1;

    cout << "Masukan harga diskon kedua: ";
    cin >> persentaseDiskon2;

    // Menghitung diskon
    double diskon1 = harga - ((persentaseDiskon1 / 100) * harga);
    double diskon1total= (persentaseDiskon1 / 100) * harga;
    double diskon2 = (persentaseDiskon2 / 100) * diskon1;
    double diskontotal = diskon1total + diskon2;
    // Menghitung harga setelah diskon 
    double totalHarga = harga - diskontotal;

    // Menampilkan hasil
    cout << "Harga barang: Rp." << harga << endl;
    cout << "Persentase diskon pertama : " << persentaseDiskon1 << "%" << endl;
    cout << "Persentase diskon kedua: " << persentaseDiskon2 << "%" << endl;
    cout << "Diskon: Rp." << diskontotal << endl;
    cout << "Total harga setelah diskon dan harus dibayar: Rp." << totalHarga << endl;

    return 0;
}
