lines = open('input.txt','r').readlines()
print(f'Good\n{len(lines)}')
out = open('output.txt','w')
out.writelines(f'Good\n{len(lines)}')