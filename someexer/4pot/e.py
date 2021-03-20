n = int(input())
ans = []
for i in range(n):
    txt = input()
    s = txt.split()
    first_bool = False
    second_bool = False
    third_bool = False
    if len(s) % 2 == 0:
        #1 Условие
        if txt.title()[0].isupper() == True:
            first_bool = True
        else: 
            first_bool = False
        #2 Условие
        for j in range(len(s)):
            if (len(s[j]) % 2 == 0 and j % 2 != 0) or (len(s[j]) % 2 != 0 and j % 2 == 0):
                second_bool = True
            else:
                second_bool = False
                break
        #3 Условие
        if s[len(s) - 1].count('3') == 2:
            third_bool = True
        else:
            third_bool = False
    #Проверяем все условия
        if first_bool == True and second_bool == True and third_bool == True:
            ans.append('Wow, it\'s perfect!')
        else:ans.append('Seriously?')

    else:
        ans.append('Seriously?')
for i in ans:
    print(i)