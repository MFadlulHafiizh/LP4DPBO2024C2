# LP4DPBO2024C2
Pada program ini bentuk desain OOP nya seperti berikut:
![image](https://github.com/MFadlulHafiizh/LP4DPBO2024C2/assets/61264072/70c543c5-bb48-4b16-b63f-21dcfccc58cf)

## Class Vehicle
class vehicle ini menjadi kelas induk dari class motorcycle dan car dimana seperti pada dunia nyata motor dan mobil adalah bagian keluarga dari kendaraan
dan semua atribut kelas ini general seperti plat no, merk yang intinya pasti akan dimiliki oleh motor ataupun mobil (sebuah kendaraan)

## Class Car dan Motorcycle
class car dan motorcycle ini menampung atribut yang dimiliki mobil ataupun motor pada umumnya dan inherit pada class vehicle ya karena
mobil atau motor itu merupakan sebuah kendaraan (vehicle) dan semua atribut vehicle pasti dimiliki oleh si mobil atau motor ini

## Class Garage
class ini tidak memiliki inheritance ke manapun dalam lingkup kasus, akan tetapi memiliki komponen objek
car dan motorcycle dengan relasi one to many dimana pada 1 buah garasi itu mungkin memiliki
lebih dari 1 motor ataupun mobil. Lalu mengapa tidak mengambil class vehicle sebagai komponen?
karena bila berdasarkan class vehicle dan dengan atribut yang diberikan itu nanti tidak akan bisa di identifikasi ketika data ditarik
mana atribut yang harus diambil antara atribut dari objek mobil atau motor? atau bila diambil semua atributnya bisa saja ada yang null salah satunya
bila garasi tersebut hanya ada mobil saja atau motor saja. meskipun ada alternatif menambah atribut jenis kendaraan atau sebuah kode identifikasi pada class vehicle
agar bisa dikenali kapan harus mengambil atribut kelas car atau motorcycle tapi secara handling nya nanti perlu pengkondisian tambahan jadi saya rasa aga hambur lebih baik secara eksplisit langsung instansiasi class car dan motornya
dan ketika orang lain membaca kode dikelas ini juga bisa langsung mengetahui bahwa di garasi itu ada motor dan mobil tidak perlu ada pertanyaan lagi bila yang diinstansiasi vehicle "vehicle disini tuh ada apa aja?"
sehingga akan lebih memudahkan

## Class ParkingLot
merupakan kelas yang berisi spesifikasi lanjutan dari sebuah garasi. karena garasi pasti memiliki
parking lot atau area untuk ditempati kendaraan (space nya). tetapi ini berbeda dengan garasi itu sendiri dan tidak sejenis
sehingga kelas ini tidak memiliki hubungan keluarga dengan garasi tetapi akan saling membutuhkan

## Output Program
![Capture1](https://github.com/MFadlulHafiizh/LP4DPBO2024C2/assets/61264072/84dbf42a-b8e8-4b32-bf5a-3eb89d1b9296)

![Capture2](https://github.com/MFadlulHafiizh/LP4DPBO2024C2/assets/61264072/4f5bfdd8-69fe-4d0c-affc-5d69f58d9905)

![Capture3](https://github.com/MFadlulHafiizh/LP4DPBO2024C2/assets/61264072/1e44068b-2e8a-48f9-b889-ce948d5aecb5)


