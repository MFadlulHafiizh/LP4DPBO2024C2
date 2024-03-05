/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

//class vehicle ini menjadi kelas induk dari class motorcycle dan car dimana seperti pada dunia nyata motor dan mobil adalah bagian keluarga dari kendaraan
//dan semua atribut kelas ini general seperti plat no, merk yang intinya pasti akan dimiliki oleh motor ataupun mobil (sebuah kendaraan)
class Vehicle
{
private:
    string plat_no;
    string merk;
    string tahun_produksi;
    string warna;

public:
    Vehicle(/* args */){}
    //Overloading constructor
    Vehicle(string plat_no, string merk, string tahun_produksi, string warna){
        this->plat_no = plat_no;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
    }

    //enakpsulasi semua atribut
    string getPlat_no() {
        return this->plat_no;
    }
    void setPlat_no(string plat_no) {
        this->plat_no = plat_no;
    }


    string getMerk() {
    	return this->merk;
    }
    void setMerk(string merk) {
    	this->merk = merk;
    }


    string getTahun_produksi() {
    	return this->tahun_produksi;
    }
    void setTahun_produksi(string tahun_produksi) {
    	this->tahun_produksi = tahun_produksi;
    }


    string getWarna() {
    	return this->warna;
    }
    void setWarna(string warna) {
    	this->warna = warna;
    }

    //desctructor
    ~Vehicle(){}
};