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
//class car ini menampung atribut yang dimiliki motor pada umumnya dan inherit pada class vehicle ya karena
//motor itu merupakan sebuah kendaraan (vehicle) dan semua atribut vehicle pasti dimiliki oleh si motor ini
class Motorcycle : public Vehicle
{
private:
    string jenis_motor;
    double kapasitas_tanki;

public:
    Motorcycle(/* args */){}
    //overloading constructor
    Motorcycle(string jenis_motor, double kapasitas_tanki, string plat, string merk, string tahun_prod, string warna) : Vehicle(plat, merk ,tahun_prod, warna){
        this->jenis_motor = jenis_motor;
        this->kapasitas_tanki = kapasitas_tanki;
    }

    //enkapsulasi semua atribut
    string getJenis_motor() {
        return this->jenis_motor;
    }
    void setJenis_motor(string jenis_motor) {
        this->jenis_motor = jenis_motor;
    }

    double getKapasitas_tanki() {
    	return this->kapasitas_tanki;
    }
    void setKapasitas_tanki(double kapasitas_tanki) {
    	this->kapasitas_tanki = kapasitas_tanki;
    }
    ~Motorcycle(){}
};
