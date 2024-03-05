/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

//class car ini menampung atribut yang dimiliki mobil pada umumnya dan inherit pada class vehicle ya karena
//mobil itu merupakan sebuah kendaraan (vehicle) dan semua atribut vehicle pasti dimiliki oleh si mobil ini
class Car : public Vehicle
{
private:
    int jumlah_kursi;
    int jumlah_pintu;

public:
    Car(/* args */){}
    //overloading constructor
    Car(int jumlah_kursi, int jumlah_pintu, string plat, string merk, string tahun_prod, string warna) : Vehicle(plat, merk ,tahun_prod, warna){
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    //enkapsulasi semua atribut
    int getJumlah_kursi() {
        return this->jumlah_kursi;
    }
    void setJumlah_kursi(int jumlah_kursi) {
        this->jumlah_kursi = jumlah_kursi;
    }

    int getJumlah_pintu() {
    	return this->jumlah_pintu;
    }
    void setJumlah_pintu(int jumlah_pintu) {
    	this->jumlah_pintu = jumlah_pintu;
    }
    ~Car(){}
};