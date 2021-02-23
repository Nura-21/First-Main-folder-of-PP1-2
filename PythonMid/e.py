l = input().split()
max = -1
ans = ""
for i in range(len(l)):
    if len(l[i])>max:
        max = len(l[i])
        ans = l[i]
print(ans)
print(len(ans))