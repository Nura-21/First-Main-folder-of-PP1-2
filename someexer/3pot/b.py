l = [int(x) for x in input().split()]
s = list(set(l))
ans = []
for i in s:
    ans.append((l.count(i),i))
max = -1
an = 0
for i in ans:
    if i[0] > max:
        max = i[0]
        an = i[1]
print(an)