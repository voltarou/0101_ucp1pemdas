

#include <iostream>
using namespace std;

int nMatematika, nBahasaInggris;
int nRerata = (nMatematika + nBahasaInggris / 2);
string nama, Status, Lulus;


void input() {
    cout << "Masukan Nama = ";
    cin >> nama;
    
    cout << "Masukan Nilai Matematika = ";
    cin >> nMatematika;
    
    cout << "Masukan Rerata";
    cin >> nRerata;

    

    
}

void hitung() {
    if (nMatematika > 80) {
        Status = Lulus;
    }

    else

    if (nRerata >= 70) {
        Status = Lulus;
    }

}

void display() {
    cout << "nama = " << nama << endl;
    cout << "Nilai Matematika = " << nMatematika << endl;
    cout << "Nilai Rata Rata = " << nRerata << endl;
    cout << "Status" << Status << endl;


}

int main()
{

    char pilihan;
    do
    {
        input();
        hitung();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || pilihan == 'Y');



}




    //1. a.int nTelor, nMie, nAir;
    //   b.int nMatematika, nRerata, nBahasaInggris;
    //   c.int nBil1, nBil2; 

    //2. misalkan :
    //   A=2 dan B=5, maka status bilangan = "A lebih kecil dari B "

    //3. Misalkan :
    //   data mahasiswa : Nomor mahasiswa : Nama Mahasiswa : Alamat Mahasiswa :
    //   Nama Desa : lenangguar
    //   Nama Kota : sumbawa
    //   Umur Mahasiswa : 18

    //4. Misalkan:
    //   1. Penjumlahan
    //   2. Pengurangan
    //   3. Perkalian
    //   4. Pembagian
    //   5. Keluar
    //   Masukan pilihan(1 / 2 / 3 / 4 / 5) : 1
    //   Bilangan Pertama = 2
    //   Bilangan Kedua = 3
    //   Hasil Penjumlahan = 5

    //5. Misalkan :
    //   1. Tambah Data
    //   2. Hapus Data
    //   3. Tampilkan Data
    //   4. Cari Data
    //   5. Keluar
    //   Pilihan : 1
    //   Masukkan NIM : 20230140101
    //   Masukkan Nama : Data Berhasil Ditambahkan
     




