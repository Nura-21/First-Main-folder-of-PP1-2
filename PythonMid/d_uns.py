s = input()
x,y = input().split()
nx,ny = 0,0
for i in range(len(s)):
    if s[i] == 'L':
        ny-=1 
    elif s[i] == 'R':
        ny+=1
    elif s[i] == 'U':
        nx+=1
    elif s[i] == 'D':
        nx-=1
    if nx == int(x) and ny == int(y):
            print("Passed")
    else: print("Missed")