import re
s = input()
ns = input()
if bool(re.search(ns,s)):
    print("First time "+ns+" occured in position: "+str(re.search(ns,s).start()))
else:print("Not found")