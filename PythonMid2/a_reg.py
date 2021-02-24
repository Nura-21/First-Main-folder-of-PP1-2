s = input()
import re
if bool(re.search(r'[A-Z][a-z]',s)):
    print("Found a match!")
else:print("Not matched!")