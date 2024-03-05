/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <list>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"

// Deklarasi namespace
using namespace std;


// class ini tidak memiliki inheritance ke manapun dalam kasus soal, akan tetapi memiliki komponen objek
// car dan motorcycle dengan relasi one to many dimana pada 1 buah garasi itu mungkin memiliki
// lebih dari 1 motor ataupun mobil.
class Garage
{
private:
    string nama;
    double luas;
    // mengapa tidak mengambil class vehicle sebagai komponen?
    // karena bila berdasarkan class vehicle dan dengan atribut yang diberikan itu nanti tidak akan bisa di identifikasi ketika data ditarik
    // mana atribut yang harus diambil antara atribut dari objek mobil atau motor? atau bila diambil semua atributnya bisa saja ada yang null salah satunya
    // bila garasi tersebut hanya ada mobil saja atau motor saja. meskipun ada alternatif menambah atribut jenis kendaraan atau sebuah kode identifikasi pada class vehicle
    // agar bisa dikenali kapan harus mengambil atribut kelas car atau motorcycle tapi secara handling nya nanti perlu pengkondisian tambahan jadi saya rasa aga hambur lebih baik secara eksplisit langsung instansiasi class car dan motornya
    // dan ketika orang lain membaca kode dikelas ini juga bisa langsung mengetahui bahwa di garasi itu ada motor dan mobil tidak perlu ada pertanyaan lagi bila yang diinstansiasi vehicle "vehicle disini tuh ada apa aja?"
    // sehingga akan lebih memudahkan
    list<Car> lCar;
    list<Motorcycle> lMotorcycle;
    ParkingLot lot;

public:
    Garage(/* args */){}
    // overloading contructor
    Garage(string nama, double luas, Car firstCar, Motorcycle firstMotorcycle, ParkingLot lot){
        this->nama = nama;
        this->luas = luas;
        this->lCar.push_back(firstCar);
        this->lMotorcycle.push_back(firstMotorcycle);
        this->lot = lot;
    }
    // overloading contructor
    Garage(string nama, double luas, ParkingLot lot){
        this->nama = nama;
        this->luas = luas;
        this->lot = lot;
    }
    // overloading contructor
    Garage(string nama, double luas, Car firstCar, ParkingLot lot){
        this->nama = nama;
        this->luas = luas;
        this->lCar.push_back(firstCar);
        this->lot = lot;
    }
    // overloading contructor
    Garage(string nama, double luas, Motorcycle firstMotorcycle, ParkingLot lot){
        this->nama = nama;
        this->luas = luas;
        this->lMotorcycle.push_back(firstMotorcycle);
        this->lot = lot;
    }

    // enkapsulasi semua atribut
    string getNama() {
        return this->nama;
    }
    void setNama(string nama) {
        this->nama = nama;
    }
    double getLuas() {
    	return this->luas;
    }
    void setLuas(double luas) {
    	this->luas = luas;
    }
    list<Car> getlCar() {
        return this->lCar;
    }
    void setlCar(list<Car> lCar) {
        this->lCar = lCar;
    }

    list<Motorcycle> getlMotorcycle() {
        return this->lMotorcycle;
    }
    void setlMotorcycle(list<Motorcycle> lMotorcycle) {
        this->lMotorcycle = lMotorcycle;
    }
    ParkingLot getLot() {
        return this->lot;
    }
    void setLot(ParkingLot lot) {
        this->lot = lot;
    }

    //fungsi untuk menambahkan objek mobil/motor pada list
    void addCar(Car car) {
        if(this->lot.getKapasitas() - this->lot.getJumlah_saat_ini() > 0){
            this->lCar.push_back(car);
            this->lot.setJumlah_saat_ini(this->lot.getJumlah_saat_ini() + 1);
        }else{
            cout << "Maaf garasi " << this->nama << " sudah penuh, tidak dapat menambahkan kendaraan lagi\n";
        }
    }
    void addMotorcycle(Motorcycle motorcycle) {
        if(this->lot.getKapasitas() - this->lot.getJumlah_saat_ini() > 0){
            this->lMotorcycle.push_back(motorcycle);
            this->lot.setJumlah_saat_ini(this->lot.getJumlah_saat_ini() + 1);
        }else{
            cout << "Maaf garasi " << this->nama << " sudah penuh, tidak dapat menambahkan kendaraan lagi\n";
        }
    }

    ~Garage(){}
};
