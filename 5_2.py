s = input()
t = input()
id = []
ans = []
for i in range(len(s)):
    if s[i] == t:
        id.append(i)
k = 0
while k < len(id)-1:
    for i in range(len(s)):
        ans.append(abs(id[k]-i))
    k+=1
k = 0
while k < len(id) - 1:
    for i in range(len(s)):
        ans[i] = (min(abs(id[k+1] - i),ans[i]))
    k+=1
print(ans)