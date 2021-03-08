import json
raw_input = input()
data = json.loads(raw_input)
minprice = 10**9
l = dict()
ans = ''
for i in data['Subscriptions']:
    pr = int(i.get('price'))
    names = i.get('name')
    disc = int(i.get('discount'))
    val = pr - pr * disc / 100
    if val < minprice:
        minprice = val
        ans = names
print(f'Name: {ans}')
print(f'Price: {int(minprice)}')
# print(json.dumps(data,indent=2))