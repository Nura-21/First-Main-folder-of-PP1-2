s,find = input(),input()
l = int(len(find))
for i in range(len(s)):
    if s[i:i+l] == find:
        print(i)
