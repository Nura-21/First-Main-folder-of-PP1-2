s = input()
ok = False
for i in range(len(s)-1):
    if s[i].isupper()==True and s[i+1].islower()==True:
        print("Found a match!")
        quit()
print("Not matched!")