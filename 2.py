txt = open('test.txt','r')
lines = txt.readlines()
for i in range(1,len(lines)):
    if lines[i]<=lines[i-1]:
        print("No")
        quit()
print('Yes')