n = int(input())
names = {}
for _ in range(n):
    name,gpa = input().split()
    gpa = int(gpa)
    if not names.get(name):
        names[name] = [1,gpa]
    else:
        names[name][0] += 1
        names[name][1] += gpa
for name in sorted(names):
    avg_gpa = names[name][1] / names[name][0]
    print(f'{name} : {avg_gpa:.3f}')