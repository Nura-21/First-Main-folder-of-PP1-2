n = int(input())
l = []
for i in range(n):
    s = input().split()
    for j in range(len(s)):
        c = 0
        ok = False
        sz = len(s[j])
        k = 0
        t = ""
        while k < sz:
            if s[j][k].isupper()==True or s[j][k].islower()==True:
                t+=s[j][k]
            k+=1
        s[j] = t
        while c < (len(s[j])):
            if 2 ** c == len(s[j]):
                s[j] = 'H' 
                ok = True
                StopIteration()
            c+=1
        if not ok:
            s[j] = "C"
    l.append(s)

for i in l:
    for j in i:
        print(j,end=' ')
    print()
