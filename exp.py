import math
w = 2000
l = 0.047
R = 8.25 * (10 ** -3)
m0 = 4 * math.pi * (10 ** -7)
I = 2000 * (10 ** -3)
U = [0.45,0.73,0.9,0.97,0.99,1.01,0.99,0.97,0.9,0.73,0.45]
n = w / l
Bexp = []
Btheor = []
cosa1,cosa2 = [],[]
x = [-0.025,-0.02,-0.015,-0.01,-0.005,0,0.005,0.01,0.015,0.02,0.025]
for ui in U:
    Bexp.append(10 * ui)
for xi in x:
    cosa1.append((xi - (l / 2)) / math.sqrt(R ** 2 + (xi - (l/2))**2 ))
    cosa2.append((xi + (l / 2)) / math.sqrt(R ** 2 + (xi + (l/2))**2 ))
for i in range(11):
    Btheor.append(((m0 * n * I)/2) * (cosa1[i] - cosa2[i]) * -1 * 100)
print("Bexper : ",Bexp)
print("Btheor : ",end = " ")
for B in Btheor:
    print(f"{B:.3}",end = " ")


