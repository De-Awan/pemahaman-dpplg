#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_barang;
    double harga_barang;
    int jumlah_barang;
    int usia_pembeli;
    const double DISKON_USIA_BAWAH_18 = 0.10;
    const double DISKON_USIA_18_65 = 0.05;
    const double DISKON_USIA_DIATAS_65 = 0.15;

    // Meminta pengguna memasukkan informasi barang
    cout << "Masukkan Nama Barang: ";
    getline(cin, nama_barang);

    cout << "Masukkan Harga Barang: ";
    cin >> harga_barang;

    cout << "Masukkan Jumlah Barang: ";
    cin >> jumlah_barang;

    cout << "Masukkan Usia Pembeli: ";
    cin >> usia_pembeli;

    // Menghitung diskon berdasarkan usia pengguna
    double diskon = 0.0;
    if (usia_pembeli < 18) {
        diskon = DISKON_USIA_BAWAH_18;
    } else if (usia_pembeli >= 18 && usia_pembeli <= 65) {
        diskon = DISKON_USIA_18_65;
    } else {
        diskon = DISKON_USIA_DIATAS_65;
    }

    // Menghitung total harga setelah diskon
    double total_harga = harga_barang * jumlah_barang * (1.0 - diskon);

    // Menampilkan informasi pembelian
    cout << "\nInformasi Pembelian:" << endl;
    cout << "Nama Barang: " << nama_barang << endl;
    cout << "Harga per Barang: " << harga_barang << endl;
    cout << "Jumlah Barang yang Dibeli: " << jumlah_barang << endl;
    cout << "Usia Pembeli: " << usia_pembeli << " tahun" << endl;
    cout << "Diskon yang Diberikan: " << (diskon * 100) << "%" << endl;
    cout << "Total Harga Setelah Diskon: " << total_harga << endl;

    return 0;
}
