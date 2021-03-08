n = int(input())
d1 = {}
l1 = input().split()
for i in range(len(l1)):
    d1[l1[i]]="Came"
k = int(input())
d2 = {}
l2 = input().split()
for i in range(len(l2)):
    d2[l2[i]]="Came"
for i in range(len(d1)):
    for j in range(len(d2)):
        if l1[i] == l2[j]:
            d1[l1[i]]="Good Student"
            d2[l2[j]]="Good Student"
print('Missed students:')
for i in range(len(d1)):
    if d1[l1[i]] == "Came":
        print('- ' + l1[i])
print('Not in the group:')
for i in range(len(d2)):
    if d2[l2[i]] == "Came":
        print('- ' + l2[i])

