l = [int(x) for x in input().split()]
k = int(input())
mn,mx = min(l),max(l)
l2 = []
for i in range(mn,mx + 1):
    l2.append(i)
l3 = list(set(l) ^ set(l2))
print(l3[k-1])
