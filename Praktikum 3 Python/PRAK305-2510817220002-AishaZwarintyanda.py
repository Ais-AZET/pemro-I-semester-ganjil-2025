nilai = int(input("Masukkan Nilai: "))

hari = nilai // 86400
jam = (nilai % 86400) //3600

menit = (nilai % 3600) // 60
detik = (nilai % 60)

if hari > 0 :
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")