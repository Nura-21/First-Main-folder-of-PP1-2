log = input()
pas = input()
import re
ok1,ok2 = False,False
if re.search(r'(#[0-9]{4}$)',log):
    ok1 = True
if re.search(r'.+[A-Za-z0-9]+.+',pas):
    ok2 = True
if ok1 == True and ok2 == True and 3<=len(log)<=32 and len(pas)>=8:
    print("YES")
else:print("No")

