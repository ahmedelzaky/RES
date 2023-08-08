def count_zeros(num):
    count = 0
    num_str = str(num)

    for digit in num_str:
        if digit == '0':
            count += 1

    return count


num = int(input("Enter a number: "))
print(f"The count of Zeros = {count_zeros(num)}")
