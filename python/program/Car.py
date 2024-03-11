#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin
from Vehicle import Vehicle
class Car(Vehicle):
    __jumlah_kursi = 0
    __jumlah_pintu = 0

    def __init__(self, jumlah_kursi, jumlah_pintu, plat_no="", merk="", tahun_prod="", warna=""):
      self.__jumlah_kursi = jumlah_kursi
      self.__jumlah_pintu = jumlah_pintu
      super().__init__(plat_no, merk, tahun_prod, warna)

    def get_jumlah_kursi(self):
        return self.__jumlah_kursi
    
    def set_jumlah_kursi(self, value):
        self.__jumlah_kursi = value

    def get_jumlah_pintu(self):
        return self.__jumlah_pintu
    
    def set_jumlah_pintu(self, value):
        self.__jumlah_pintu = value
