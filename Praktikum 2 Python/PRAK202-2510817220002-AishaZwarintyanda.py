n1 = float(input("Masukkan nilai pertama : "))
n2 = float(input("Masukkan nilai kedua : "))

total = n1 + n2

if n1.is_integer():
    print("Hasil dari penjumlahan nilai pertama %d dan nilai kedua %.1f adalah %.1f" % (int(n1), n2, total))
else:
    print("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.1f adalah %.2f" % (n1, n2, total))