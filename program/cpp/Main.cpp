#include <bits/stdc++.h>
#include "Garage.cpp"
#include "Motorcycle.cpp"
#include "Car.cpp"
#include "ParkingLot.cpp"

void showGarageInformation(list<Garage> garageList){
    for (list<Garage>::iterator it = garageList.begin(); it != garageList.end(); it++)
    {
        cout << "\n======================================================\n";
        cout << it->getNama() << "\n";
        cout << "======================================================\n";
        cout << "Luas garasi : " << it->getLuas() << "m2\n";
        cout << "Max kapasitas : " << it->getLot().getKapasitas() << "\n";
        cout << "Kapasitas s.d saat ini : " << it->getLot().getJumlah_saat_ini() << "\n";
        cout << "Sisa kapasitas : " << it->getLot().getKapasitas() - it->getLot().getJumlah_saat_ini() << "\n";
        cout << "Daftar Mobil Terparkir :\n";
        int i = 1;
        if(it->getlCar().size() > 0){
            for (Car itCar : it->getlCar())
            {
                cout << "   "<< i<< ".  No Plat : " << itCar.getPlat_no() << "\n";
                cout << "   "<< "    Merk : " << itCar.getMerk() << "\n";
                cout << "   "<< "    Tahun Produksi : " << itCar.getTahun_produksi() << "\n";
                cout << "   "<< "    Warna : " << itCar.getWarna() << "\n";
                cout << "   "<< "    Jumlah Pintu : " << itCar.getJumlah_pintu() << "\n";
                cout << "   "<< "    Jumlah Kursi : " << itCar.getJumlah_kursi() << "\n";
                cout << "   "<< "---------------------------------------------------\n";
                i++;
            }
        }else{
            cout << "   *Tidak ada mobil terparkir*\n";
            cout << "   "<< "---------------------------------------------------\n";
        }
        cout << "Daftar Motor Terparkir :\n";
        i = 1;
        if(it->getlMotorcycle().size() > 0){
            for (Motorcycle itMot : it->getlMotorcycle())
            {
                cout << "   "<< i<< ".  No Plat : " << itMot.getPlat_no() << "\n";
                cout << "   "<< "    Merk : " << itMot.getMerk() << "\n";
                cout << "   "<< "    Tahun Produksi : " << itMot.getTahun_produksi() << "\n";
                cout << "   "<< "    Warna : " << itMot.getWarna() << "\n";
                cout << "   "<< "    Jenis Motor : " << itMot.getJenis_motor() << "\n";
                cout << "   "<< "    Kapasitas Tanki : " << itMot.getKapasitas_tanki() << " L\n";
                cout << "   "<< "---------------------------------------------------\n";
                i++;
            }
        }else{
            cout << "   *Tidak ada motor terparkir*\n";
            cout << "   "<< "---------------------------------------------------\n";
        }
        cout << "\n";

    }
    
    
}
int main(){
    //skenario flow yang dibuat adalah mencoba membuat beberapa garasi sebagai sample contoh garasi rumahan atau anggaplah
    //ada sebuah garasi besar yang memiliki kapasitas banyak kendaraan dan atau dikhususkan untuk jenis kendaraan tertentu
    //dan perlu muncul juga informasi kapasitas dan warning bila menambahkan motor/mobil pada garasi itu mempengaruhi kapasitas pada parking lot nya
    ParkingLot mylot(2);
    ParkingLot showroomlot(200);
    ParkingLot rdlot(300);
    Garage myGarage("Garasi Saya", 5.2, mylot);
    Garage showroomGarage("Garasi Showroom", 350, showroomlot);
    Garage rudisalimGarage("Garasi Rudisalim", 700, rdlot);
    
    myGarage.addCar(Car(4, 4, "D 0467 AJ", "Toyota", "2019", "Putih"));
    myGarage.addMotorcycle(Motorcycle("Trail", 9.21, "D 0467 AJ", "Honda", "2019", "Merah"));
    //disini akan muncul warning karena mygarage kapasitas nya hanya maks untuk 2 kendaraan
    myGarage.addMotorcycle(Motorcycle("Matic", 5.3, "D 1615 ZAN", "Yamaha", "2013", "Hitam"));

    //menambahkan kendaraan bermotor pada showroomGarage
    showroomGarage.addMotorcycle(Motorcycle("Matic", 5.3, "D 1711 BW", "Yamaha", "2015", "Hitam"));
    showroomGarage.addMotorcycle(Motorcycle("Matic", 7.3, "D 1213 JJ", "Yamaha", "2020", "Merah"));
    showroomGarage.addMotorcycle(Motorcycle("Matic", 7, "D 6532 KH", "Suzuki", "2016", "Cyan"));
    showroomGarage.addMotorcycle(Motorcycle("Sport", 11.31, "D 4213 ABW", "Suzuki", "2019", "Ungu"));
    showroomGarage.addMotorcycle(Motorcycle("Sport", 9.22, "D 5132 ABW", "Honda", "2019", "Merah"));
    showroomGarage.addMotorcycle(Motorcycle("Trail", 9.22, "D 5222 ABW", "Honda", "2022", "Putih"));

    //menambahkan kendaraan mobil dan motor pada transmart garage
    rudisalimGarage.addCar(Car(4, 6, "B 1212 JK", "Toyota", "2023", "Silver"));
    rudisalimGarage.addCar(Car(4, 6, "B 1472 FJ", "Wuling", "2020", "Putih"));
    rudisalimGarage.addCar(Car(4, 4, "B 4312 AK", "Honda", "2018", "Kuning"));
    rudisalimGarage.addCar(Car(2, 2, "D 8990 AK", "Hyundai", "2016", "Hitam"));
    rudisalimGarage.addMotorcycle(Motorcycle("Matic", 7, "D 8911 HG", "Yamaha", "2022", "Hijau"));
    rudisalimGarage.addMotorcycle(Motorcycle("Sport", 9.22, "D 7788 JA", "Honda", "2021", "Merah"));
    rudisalimGarage.addMotorcycle(Motorcycle("Trail", 9.22, "D 8779 UY", "Suzuki", "2022", "Putih"));
    list<Garage> lGarage = {myGarage, showroomGarage, rudisalimGarage};
    //tampilkan semua informasi pada tiap garasi
    showGarageInformation(lGarage);

    
}