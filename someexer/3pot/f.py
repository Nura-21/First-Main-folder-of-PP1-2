import re
txt = input()
if re.match(r'(PP2).+(midterm$)',txt):
    print("Success")
else:print('No')