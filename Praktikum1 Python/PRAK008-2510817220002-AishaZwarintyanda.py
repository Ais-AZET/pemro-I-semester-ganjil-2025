jarak = 14
putaran = 5
pi = 3.14

print("Diketahui:")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak} Kilometer")
print("Jawaban:")

#Rumus jari-jari
jj = jarak / (putaran * 2 * pi)

print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jj:.2f} Kilometer")