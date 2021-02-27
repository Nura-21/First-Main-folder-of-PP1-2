import json
raw_input = '''
{"Subscriptions": [
    {
        "name": "Three month subscription",
        "price": "39900",
        "discount": "50"
    },
    {
        "name": "One month subscription",
        "price": "19900",
        "discount": "30"
    },
    {
        "name": "Premium free trial",
        "price": "40000",
        "discount": "10"
    }
    ]
}'''
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