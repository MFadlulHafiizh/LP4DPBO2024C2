#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

#class vehicle ini menjadi kelas induk dari class motorcycle dan car dimana seperti pada dunia nyata motor dan mobil adalah bagian keluarga dari kendaraan
#dan semua atribut kelas ini general seperti plat no, merk yang intinya pasti akan dimiliki oleh motor ataupun mobil (sebuah kendaraan)
class Vehicle:
    def __init__(self, plat_no="", merk="", tahun_produksi="", warna=""):
        self.__plat_no = plat_no
        self.__merk = merk
        self.__tahun_produksi = tahun_produksi
        self.__warna = warna

    #enakpsulasi semua atribut
    def get_plat_no(self):
        return self.__plat_no

    def set_plat_no(self, plat_no):
        self.__plat_no = plat_no

    def get_merk(self):
        return self.__merk

    def set_merk(self, merk):
        self.__merk = merk

    def get_tahun_produksi(self):
        return self.__tahun_produksi

    def set_tahun_produksi(self, tahun_produksi):
        self.__tahun_produksi = tahun_produksi

    def get_warna(self):
        return self.__warna

    def set_warna(self, warna):
        self.__warna = warna
