a, b, c = map(int, input("Masukkan Nilai: ").strip().split())

if a > b:
    a, b = b, a
if b > c :
    b, c = c, b
if a > b:
    a, b = b, a
    
print(f"{a} {b} {c}")