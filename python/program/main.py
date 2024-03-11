#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

from Garage import Garage
from Motorcycle import Motorcycle
from Car import Car
from ParkingLot import ParkingLot
def showGarageInformation(garageList):
    for garage in garageList:
        print("\n======================================================")
        print(garage.getNama())
        print("======================================================")
        print("Luas garasi :", garage.getLuas(), "m2")
        print("Max kapasitas :", garage.getLot().get_kapasitas())
        print("Kapasitas s.d saat ini :", garage.getLot().get_jumlah_saat_ini())
        print("Sisa kapasitas :", garage.getLot().get_kapasitas() - garage.getLot().get_jumlah_saat_ini())
        print("Daftar Mobil Terparkir :")
        i = 1
        if garage.getlCar():
            for car in garage.getlCar():
                print("   ", i, ".  No Plat :", car.get_plat_no())
                print("   ", "    Merk :", car.get_merk())
                print("   ", "    Tahun Produksi :", car.get_tahun_produksi())
                print("   ", "    Warna :", car.get_warna())
                print("   ", "    Jumlah Pintu :", car.get_jumlah_pintu())
                print("   ", "    Jumlah Kursi :", car.get_jumlah_kursi())
                print("   ", "---------------------------------------------------")
                i += 1
        else:
            print("   *Tidak ada mobil terparkir*")
            print("   ", "---------------------------------------------------\n")
        print("Daftar Motor Terparkir :")
        i = 1
        if garage.getlMotorcycle():
            for motorcycle in garage.getlMotorcycle():
                print("   ", i, ".  No Plat :", motorcycle.get_plat_no())
                print("   ", "    Merk :", motorcycle.get_merk())
                print("   ", "    Tahun Produksi :", motorcycle.get_tahun_produksi())
                print("   ", "    Warna :", motorcycle.get_warna())
                print("   ", "    Jenis Motor :", motorcycle.get_jenis_motor())
                print("   ", "    Kapasitas Tanki :", motorcycle.get_kapasitas_tanki(), "L")
                print("   ", "---------------------------------------------------")
                i += 1
        else:
            print("   *Tidak ada motor terparkir*")
            print("   ", "---------------------------------------------------")
        print("\n")


mylot = ParkingLot(2)
showroomlot = ParkingLot(200)
rdlot = ParkingLot(300)

myGarage = Garage("Garasi Saya", 5.2, mylot)
showroomGarage = Garage("Garasi Showroom", 350, showroomlot)
rudisalimGarage = Garage("Garasi Rudisalim", 700, rdlot)

myGarage.addCar(Car(4, 4, "D 0467 AJ", "Toyota", "2019", "Putih"))
myGarage.addMotorcycle(Motorcycle("Trail", 9.21, "D 0467 AJ", "Honda", "2019", "Merah"))
myGarage.addMotorcycle(Motorcycle("Matic", 5.3, "D 1615 ZAN", "Yamaha", "2013", "Hitam"))

showroomGarage.addMotorcycle(Motorcycle("Matic", 5.3, "D 1711 BW", "Yamaha", "2015", "Hitam"))
showroomGarage.addMotorcycle(Motorcycle("Matic", 7.3, "D 1213 JJ", "Yamaha", "2020", "Merah"))
showroomGarage.addMotorcycle(Motorcycle("Matic", 7, "D 6532 KH", "Suzuki", "2016", "Cyan"))
showroomGarage.addMotorcycle(Motorcycle("Sport", 11.31, "D 4213 ABW", "Suzuki", "2019", "Ungu"))
showroomGarage.addMotorcycle(Motorcycle("Sport", 9.22, "D 5132 ABW", "Honda", "2019", "Merah"))
showroomGarage.addMotorcycle(Motorcycle("Trail", 9.22, "D 5222 ABW", "Honda", "2022", "Putih"))

rudisalimGarage.addCar(Car(4, 6, "B 1212 JK", "Toyota", "2023", "Silver"))
rudisalimGarage.addCar(Car(4, 6, "B 1472 FJ", "Wuling", "2020", "Putih"))
rudisalimGarage.addCar(Car(4, 4, "B 4312 AK", "Honda", "2018", "Kuning"))
rudisalimGarage.addCar(Car(2, 2, "D 8990 AK", "Hyundai", "2016", "Hitam"))
rudisalimGarage.addMotorcycle(Motorcycle("Matic", 7, "D 8911 HG", "Yamaha", "2022", "Hijau"))
rudisalimGarage.addMotorcycle(Motorcycle("Sport", 9.22, "D 7788 JA", "Honda", "2021", "Merah"))
rudisalimGarage.addMotorcycle(Motorcycle("Trail", 9.22, "D 8779 UY", "Suzuki", "2022", "Putih"))

lGarage = [myGarage, showroomGarage, rudisalimGarage]

showGarageInformation(lGarage)
