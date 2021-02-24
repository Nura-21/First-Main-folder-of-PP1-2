n = int(input())
l = (input().split())
ok = True
if len(l)==1:
    print("Interesting")
    quit()
for i in range(len(l)-1):
    if int(l[i])>int(l[i+1]):
        ok = False
        SystemExit()
if ok:print("Interesting")
else:print('Not interesting')