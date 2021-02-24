import re
s = input()
ok1,ok2,ok3,ok4 = bool(re.search(r'[A-Z]+',s)),bool(re.search(r'[a-z]+',s)),bool(re.search(r'[0-9]+',s)),bool(re.search(r'[_]+',s))
if ok1==ok2==ok3==ok4:
    print('Found a match!')
else:print("Not matched!")