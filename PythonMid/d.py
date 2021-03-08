s = input()
x,y = input().split()
nx,ny = 0,0
ok1 = True
qt = False
if x==0 and y == 0:
    print("Passed")
    quit()
for i in range(len(s)):
    if x=='0' and y == '0':
        ok1 = True
        print("Passed")
        qt = True
        quit()
    if qt == True:
        quit()    
    if s[i] == 'L':
        nx-=1 
    elif s[i] == 'R':
        nx+=1
    elif s[i] == 'U':
        ny+=1
    elif s[i] == 'D':
        ny-=1
    if nx == int(x) and ny == int(y):
            ok1 = True
            print("Passed")
            quit()
    else: ok1 = False
if not ok1:
    print("Missed")