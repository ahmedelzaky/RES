def lucky_num(s, e):
    count = 0
    arr = []
    while s < e:
        s += 1
        num_str = str(s)

        for digit in num_str:
            flag = False
            if digit == '4' or digit == '7':
                flag = True
            else:
                flag = False
                break
        if flag:
            arr.append(s)
            count += 1
    if count:
        return arr
    else:
        return -1


num1 = int(input("Enter the start number: "))
num2 = int(input("Enter the end number: "))
print(
    f"The Luckey Numbers between {num1} and {num2} are {lucky_num(num1 , num2)}")
