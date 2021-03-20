n = int(input())
d = {}
ans = []
ok = False
for i in range(n):
    s = input()
    d[s] = d.get(s,0) + 1
    if d[s] % 2 == 0:
        ans.append(s)
        ok = True

if not ok:
    print("Understandable, have a great day")
else:
    for i in ans:
        print(i)
