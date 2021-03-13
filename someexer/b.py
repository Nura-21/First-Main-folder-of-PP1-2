import re
txt = input()
ch = input()
l = re.findall(ch+r'[A-Za-z]{2}',txt)
print(l)