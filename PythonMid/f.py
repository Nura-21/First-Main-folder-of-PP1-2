a,b = input().split()
chet = 0
a = int(a)
b = int(b)
while a <= b:
    a*=3
    b*=2
    chet+=1
print(chet)