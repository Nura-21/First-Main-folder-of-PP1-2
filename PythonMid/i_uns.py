n = int(input())
l = input().split()
k = int(input())
s,w = '',''
for i in range(k):
    s+=l[i]
for i in range(n-k):
    w+=l[1:2]
print(s,w)