n = int(input())
d = {}
for i in range(n):
    l1 = input().split()
for j in l1:
    d[j]=0
k = int(input())
for i in range(k):
    l2 = input().split()
for j in l2:
    d[j]+=1
for i in range(len(d)):
    if d[i]==1:
        print(d[i])
