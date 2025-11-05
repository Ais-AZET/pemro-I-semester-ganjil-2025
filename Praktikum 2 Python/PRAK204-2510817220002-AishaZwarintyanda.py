jari = float(input("Masukkan nilai jari-jari : "))
tinggi = float(input("Masukkan nilai tinggi : "))

volume = (22.0 / 7.0) * (jari * jari) * tinggi
luas = 2 * (22.0 / 7.0) * jari * (jari + tinggi)
keliling = 2 * (22.0 / 7.0) * jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")