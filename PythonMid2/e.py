n = int(input())
import re
l = []
for i in range(n):
    l.append(input().split())
k = int(input())
l2 = []
for i in range(k):
    l2.append(input())
l3 = []
for i in range(n):
    l3.append(''.join(l[i]))
print(l3)
