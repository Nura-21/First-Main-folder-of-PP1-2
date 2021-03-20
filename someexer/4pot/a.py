n = int(input())
d = {}
for i in range(n):
    key, value = input().split()
    if not d.get(key):
        d[key] = (value + ' ')
    else:
        d[key]+=(value + ' ')
for key in sorted(d):
    line = d[key].split()
    print(f'{key}:',end=" [")
    print(*(line),sep=', ',end=']')
    print()