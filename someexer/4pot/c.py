n = int(input())
all_line = []
for i in range(n):
    s = input().split('.')
    ok = False
    if len(s) == 4:
        for j in s:
            if j.isdigit() == True:
                if len(j)>=2 and j[0] == '0':
                    ok = False
                    break
                else:
                    ok = True
                if 0<=int(j)<=255:
                    ok = True
                else:
                    ok = False
                    break
            else:
                ok = False
                break
        if ok == True:
            all_line.append('Yes')
        else:
            all_line.append('No')
    else:
        all_line.append('No')
for i in all_line:
    print(i)