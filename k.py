n = int(input())
l = [int(x) for x in input().split()]
f = 0 
s = 0
f2,s2 = 0,0

f = min(l[0],l[1])
for i in range(len(l)):
        if i &  1 ==0:
            s = max(f,l[i])
        else:
            f = min(s,l[i])
f2 = max(l[0],l[1])
for i in range(len(l)):
        if i &  1 ==0:
            s2 = min(f2,l[i])
        else:
            f2 = max(s2,l[i]) 
print(s - f2)