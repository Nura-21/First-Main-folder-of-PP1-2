n = int(input())
d = {}
d2 = {}
l = []
names = []
for i in range(n):
    s,k = input().split()
    names.append(s)
    l.append(int(k))
    d[s] = 0
    d2[s] = 0
for i in range(n):
    d[names[i]] += l[i]
    d2[names[i]] += 1 

for k,v in d.items():
    print(f'{k} : {v / d2[k]:.3f}')