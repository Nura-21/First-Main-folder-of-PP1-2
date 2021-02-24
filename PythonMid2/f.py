n = int(input())
s = input()
ans = ""
for i in range(len(s)):
    asc_val = ord(s[i])
    if asc_val + n > ord('Z'):
        asc_val-=26
    ans+=(chr(asc_val+n))
print(ans)