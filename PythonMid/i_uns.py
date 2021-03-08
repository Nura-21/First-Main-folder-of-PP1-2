n = int(input())
s = list(map(str,input().split()))
k = int(input())
if k == 0:
    print('0')
    quit()
fir,sec = '',''
for i in s[0:k]:
    fir+=i
for i in s[k:]:
    sec+=i
print(int(fir) * int(sec))