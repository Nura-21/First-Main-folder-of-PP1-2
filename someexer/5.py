txt1 = input().split()
txt2 = input().split()
d1,d2 = {},{}
for i in range(len(txt1)):
    d1[txt1[i]] = 1
    d2[txt2[i]] = 1

for i in d1:
    for j in d2:
        if i == j:
            d1[i] +=1
            d2[j] +=1
print("Absent: ",end=" ")
for i in d1:
    if d1[i] == 1:
            print(i,end=" ")
print()
print("Lost: ", end= " ")
for j in d2:
    if d2[j] == 1:
        print(j, end = " ")
    