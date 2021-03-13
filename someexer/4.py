txt = input().split()
ans = 0
for i in txt:
    if len(i) & 1 != 0:
        ans+=1
print(ans)