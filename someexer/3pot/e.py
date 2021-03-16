n = int(input())
d= {}
for i in range(n):
    s = input().split()
    name = s[0]
    del s[0]
    for j in range(len(s)):
        if not d.get(name):
            d[name] = ''
        d[name]+=str(s[j] + ",")
for i in d:
    line = d[i].split(",")
    print(f"{i}: ",end=' ')
    print(*(line[0:int(len(line)-1)]),sep=", ")