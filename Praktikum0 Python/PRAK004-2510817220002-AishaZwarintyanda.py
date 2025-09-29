def output(width, nama, nim):
    jarak = width - 2
    #untuk memberi jarak konten dan garis kanan kiri kotak#
    #jika tidak digunakan, garis kanan akan melewati bentuk kotak yg seharusnya
    #jika diganti menjadi 5, akan menyempitkan jarak konten dan pembatas kanan-kiri, posisi konten tetap ditengah

    #top#
    print("#" * width)
    #tanda # dikali jumlah lebar

    #blank
    print("#" + " " * jarak + "#")
    #operasi kali dikerjakan duluan, spasi akan dikalikan jarak, lalu ditambahkan dengan # di kanan dan kiri

    #nama
    kiri = (jarak - len(nama)) // 2
    #len adalah fungsi bawaan yg berfungsi untuk menghitung panjang element
    #jika var jarak// diubah menjadi 1, nama akan melekat ke kiri (tanpa jarak) 3 keatas menjadi sebaliknya, supaya tetap ditengah harus disesuaikan kembali
    kanan = jarak - kiri - len(nama)
    print("#" + " " * kiri + nama + " " * kanan + "#")
    #blank dikalikan panjang width (25), lalu ditambahkan nama ditengahnya dan diberi # di kanan dan kiri

    #nim
    kiri = (jarak - len(nim)) // 2
    kanan = jarak - kiri - len(nim)
    print("#" + " " * kiri + nim + " " * kanan + "#")

    #blank
    print("#" + " " * jarak + "#")

    #bottom#
    print("#" * width)


#Call it
output(25, "Aisha Zwarintyanda", "2510817220002")
