a,b = input().split()
chet = 0
a = int(a)
b = int(b)
while a <= b:
    a+=a * 3
    b+=b * 2
    chet+=1
print(chet)