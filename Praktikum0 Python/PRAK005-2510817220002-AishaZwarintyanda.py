def AZ(n=7, s=3):
    #n & s bisa diganti dgn var lain
    for a in range(n):
        # huruf A
        Aletter = "".join(
            #join fungsinya untuk menggabung byk string, jika tdk ada .join maka coding tdk bisa jalan
            "#" if a == 0 or a == n // 2 or z == 0 or z == n - 1 else " "
            for z in range(n)
        )
        #a == 0/n menentukan posisi garis atas dan tengah A
        #z == 0/n - 1 menentukan posisi garis kanan dan kiri huruf a
        #n//2 maksudnya untuk membulatkan nilai setengah dari n, tapi dibulatkan ke bawah
        #Kalau n = 7 → n // 2 = 3
        #Kalau n = 8 → n // 2 = 4
        #range tidak bisa diganti dengan nama lain karena fungsi bawaan dari python sendiri
        #urutan if or for dan in: if menjalankan semua or, lalu for menunjukan bahwa rumus sebelumnya untuk diterapkan ke "in range(n)"

        # huruf Z
        Zletter = "".join(
            "#" if a == 0 or a == n - 1 or z == n - 1 - a else " "
            for z in range(n)
        )

        print(Aletter + " " * s + Zletter)
        #space "" akan dikalikan berdasar jumlah s terlebih dahulu, baru ditambahkan huruf a dan z diakhir


#call output
AZ(7, 3)
#angka depan menentukan tinggi huruf, angka belakang menentukan lebar space huruf
#misal: jika diisi angka 0, huruf akan berdempetan, diatas 0 akan memberi jarak antar huruf
