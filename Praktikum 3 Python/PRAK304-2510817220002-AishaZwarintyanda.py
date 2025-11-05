angka = int(input("Masukkan Nilai: "))

if angka == 0:
    print("Nol")
elif angka > 0 and angka < 10:
    print("Satuan")
elif angka > 10 and angka < 20:
    print("Belasan")
elif angka > 19 and angka <99:
    print("Puluhan")
elif angka == 10:
    print("Puluhan")
else:
    print("Anda menginput melebihi limit bilangan")