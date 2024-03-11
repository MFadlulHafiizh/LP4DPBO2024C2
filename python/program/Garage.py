#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_4 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

#class ini tidak memiliki inheritance ke manapun dalam kasus soal, akan tetapi memiliki komponen objek
#car dan motorcycle dengan relasi one to many dimana pada 1 buah garasi itu mungkin memiliki
#lebih dari 1 motor ataupun mobil.
class Garage:
    def __init__(self, nama="", luas=0.0, lot=None):
        self.__nama = nama
        self.__luas = luas
        # mengapa tidak mengambil class vehicle sebagai komponen?
        # karena bila berdasarkan class vehicle dan dengan atribut yang diberikan itu nanti tidak akan bisa di identifikasi ketika data ditarik
        # mana atribut yang harus diambil antara atribut dari objek mobil atau motor? atau bila diambil semua atributnya bisa saja ada yang null salah satunya
        # bila garasi tersebut hanya ada mobil saja atau motor saja. meskipun ada alternatif menambah atribut jenis kendaraan atau sebuah kode identifikasi pada class vehicle
        # agar bisa dikenali kapan harus mengambil atribut kelas car atau motorcycle tapi secara handling nya nanti perlu pengkondisian tambahan jadi saya rasa aga hambur lebih baik secara eksplisit langsung instansiasi class car dan motornya
        # dan ketika orang lain membaca kode dikelas ini juga bisa langsung mengetahui bahwa di garasi itu ada motor dan mobil tidak perlu ada pertanyaan lagi bila yang diinstansiasi vehicle "vehicle disini tuh ada apa aja?"
        # sehingga akan lebih memudahkan
        self.__lCar = []
        self.__lMotorcycle = []
        self.__lot = lot

    def getNama(self):
        return self.__nama

    def setNama(self, nama):
        self.__nama = nama

    def getLuas(self):
        return self.__luas

    def setLuas(self, luas):
        self.__luas = luas

    def getlCar(self):
        return self.__lCar

    def setlCar(self, lCar):
        self.__lCar = lCar

    def getlMotorcycle(self):
        return self.__lMotorcycle

    def setlMotorcycle(self, lMotorcycle):
        self.__lMotorcycle = lMotorcycle

    def getLot(self):
        return self.__lot

    def setLot(self, lot):
        self.__lot = lot

    def addCar(self, car):
        if self.__lot.get_kapasitas() - self.__lot.get_jumlah_saat_ini() > 0:
            self.__lCar.append(car)
            self.__lot.set_jumlah_saat_ini(self.__lot.get_jumlah_saat_ini() + 1)
        else:
            print(f"Maaf garasi {self.__nama} sudah penuh, tidak dapat menambahkan kendaraan lagi")

    def addMotorcycle(self, motorcycle):
        if self.__lot.get_kapasitas() - self.__lot.get_jumlah_saat_ini() > 0:
            self.__lMotorcycle.append(motorcycle)
            self.__lot.set_jumlah_saat_ini(self.__lot.get_jumlah_saat_ini() + 1)
        else:
            print(f"Maaf garasi {self.__nama} sudah penuh, tidak dapat menambahkan kendaraan lagi")

    def __del__(self):
        pass

