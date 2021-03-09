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
        ans.append(min(abs(id[k] - i),abs(id[k+1] - i)))
    k+=1
print(ans)