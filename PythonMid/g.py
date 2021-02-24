import re
main,fir,sec = input(),input(),input()
main = re.sub(fir,sec,main)
check = input()
l = re.findall(check,main)
print(len(l))