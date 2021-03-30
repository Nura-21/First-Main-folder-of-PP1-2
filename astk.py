n = int(input())
a = list(map(int,input().split()))
def Arman(a:list):
    start_list = [str(i) for i in a[:2]]
    start = ",".join(start_list)
    starting_string = "max(" + str(start) + ")"
    if len(a) <= 2:
        return starting_string
    else:
        for i in range(2,len(a),2):
            if (i+1) % 2 != 0:
                starting_string = "max(" + starting_string + "," + str(a[i]) + ")"
            else:
                starting_string = "min(" +starting_string + "," + str(a[i]) + ")"
        return starting_string
def Karman(a:list):
    start_list = [str(i) for i in a[:2]]
    start = ",".join(start_list)
    starting_string = "max(" + str(start) + ")"
    if len(a) <= 2:
        return starting_string
    else:
        for i in range(2, len(a),2):
            if (i + 1) % 2 != 0:
                starting_string = "min(" + starting_string + "," + str(a[i]) + ")"
            else:
                starting_string = "max(" + starting_string + "," + str(a[i]) + ")"
        return starting_string
# num_1 мен num_2 арасындагы минимум операция тап
exec(f"num_1 = {Arman(a)}")
exec(f"num_2 = {Karman(a)}")
def minimum_operations():
    print(max(num_1,num_2) - min(num_1,num_2))
minimum_operations()