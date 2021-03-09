l1 = [int(x) for x in input().split()]
cnt=0
for i in range(len(l1)):
    for j in range(len(l1)):
        if l1[i]==l1[j] and i != j:
            cnt+=1
print(int(cnt/2))