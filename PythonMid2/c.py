n = int(input())
l = sorted(list(set(sorted(input().split()))))
for i in range(1,len(l)):
    print(i,l[i])
