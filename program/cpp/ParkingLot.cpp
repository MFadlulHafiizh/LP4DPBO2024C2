/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
// Deklarasi namespace
using namespace std;

// merupakan kelas yang berisi spesifikasi lanjutan dari sebuah garasi. karena garasi pasti memiliki
// parking lot atau area untuk ditempati kendaraan (space nya). tetapi ini berbeda dengan garasi itu sendiri dan tidak sejenis
// sehingga kelas ini tidak memiliki hubungan keluarga dengan garasi tetapi akan saling membutuhkan
class ParkingLot
{
private:
    int kapasitas;
    int jumlah_saat_ini;

public:
    ParkingLot(/* args */){}
    // overloading constructor
    ParkingLot(int kapasitas){
        this->kapasitas = kapasitas;
        this->jumlah_saat_ini = 0; //ini sengaja dibuat nilai awal 0, karena berdasarkan flow yang direncakan ingin nilai ini bertambah ketika sudah ada kendaraan yang ditambahkan ke garasi nantinya
    }

    //enkapsulasi semua atribut
    int getKapasitas() {
        return this->kapasitas;
    }
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    int getJumlah_saat_ini() {
    	return this->jumlah_saat_ini;
    }
    void setJumlah_saat_ini(int jumlah_saat_ini) {
    	this->jumlah_saat_ini = jumlah_saat_ini;
    }
    ~ParkingLot(){}
};