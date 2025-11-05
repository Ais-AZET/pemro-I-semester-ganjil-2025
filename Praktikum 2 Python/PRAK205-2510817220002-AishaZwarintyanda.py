import math

def hasil(A, B):

    c = max(A, B)
    t = min(A, B)
    k = math.sqrt(c * c - t * t)
    
    Alas = round(k)
    Tinggi = round(t)

    keliling = Alas + Tinggi + c
    luas = 0.5 * Alas * Tinggi

    print("\noutput")
    print(f"Alas = {Alas:.0f} cm")
    print(f"Tinggi = {Tinggi:.0f} cm")
    print(f"Keliling = {round(keliling):.0f} cm")
    print(f"Luas = {round(luas):.0f} cm^2")

A = float(input("Masukkan Nilai A : "))
B = float(input("Masukkan Nilai B : "))

print("\nInput")
print(f"{A:.0f} {B:.0f}")

hasil(A, B)