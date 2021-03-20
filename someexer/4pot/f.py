n = int(input())
l = []
sum_of_line = []
for i in range(n):
    sum_each_word = 0
    line = []
    s = input().split()
    for j in s:
        line.append(len(j))
        sum_each_word+=len(j)
    sum_of_line.append(sum_each_word)
    l.append(line)
for i in range(len(l)):
    print(*(l[i]),end=' ')
    print(f'total: {sum_of_line[i]}')