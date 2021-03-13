txt = input().split()
def isodd(txt):
    if len(txt) & 1 !=0:
        return 1
    else: return 0
b = list(map(isodd,txt))
print(b.count(1))