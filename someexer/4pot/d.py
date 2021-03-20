l = [int(x) for x in input().split()]
cnt = 0
for i in range(len(l)):
    for j in range(len(l)):
        if l[i] == l[j] and i < j:
            cnt+=1
print(cnt)