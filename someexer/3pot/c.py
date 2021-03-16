ll,r = map(int,input().split())
l = [int(x) for x in input().split()]
l2 = []
for i in range(ll,r+1):
    l2.append(i)
print(*sorted((set(l) ^ set(l2))))
