#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

#merupakan kelas yang berisi spesifikasi lanjutan dari sebuah garasi. karena garasi pasti memiliki
#parking lot atau area untuk ditempati kendaraan (space nya). tetapi ini berbeda dengan garasi itu sendiri dan tidak sejenis
# sehingga kelas ini tidak memiliki hubungan keluarga dengan garasi tetapi akan saling membutuhkan
class ParkingLot:
    __kapasitas = 0
    __jumlah_saat_ini = 0

    def __init__(self, kapasitas):
      self.__kapasitas = kapasitas

    #enkapsulasi semua atribut
    def get_kapasitas(self):
        return self.__kapasitas
    
    def set_kapasitas(self, value):
        self.__kapasitas = value

    def get_jumlah_saat_ini(self):
        return self.__jumlah_saat_ini
    
    def set_jumlah_saat_ini(self, value):
        self.__jumlah_saat_ini = value
