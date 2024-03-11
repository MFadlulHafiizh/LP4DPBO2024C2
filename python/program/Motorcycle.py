
#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin
from Vehicle import Vehicle

#class Motorcycle ini menampung atribut yang dimiliki motor pada umumnya dan inherit pada class vehicle ya karena
#motor itu merupakan sebuah kendaraan (vehicle) dan semua atribut vehicle pasti dimiliki oleh si motor ini
class Motorcycle(Vehicle):
    __jenis_motor = ''
    __kapasitas_tanki = 0

    #enkapsulasi semua atribut
    def __init__(self, jenis_motor, kapasitas_tanki, plat_no="", merk="", tahun_prod="", warna=""):
      self.__jenis_motor = jenis_motor
      self.__kapasitas_tanki = kapasitas_tanki
      super().__init__(plat_no, merk, tahun_prod, warna)

    def get_jenis_motor(self):
        return self.__jenis_motor
    
    def set_jenis_motor(self, value):
        self.__jenis_motor = value

    def get_kapasitas_tanki(self):
        return self.__kapasitas_tanki
    
    def set_kapasitas_tanki(self, value):
        self.__kapasitas_tanki = value
