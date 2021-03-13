l = [int(x) for x in input().split()]
l2 = sorted(l)
ans = 0
for i in range(len(l)):
    if l[i] != l2[i]:
        ans+=1
print(ans)
