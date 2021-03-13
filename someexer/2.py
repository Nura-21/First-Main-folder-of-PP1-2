txt = input().split()
d = {}
for i in range(len(txt)):
    if not d.get(txt[i]):
        d[txt[i]] = 1
    else:
        d[txt[i]]+=1
for i in sorted(d):
    print(i,d[i])