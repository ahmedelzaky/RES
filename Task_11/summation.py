def sum(arr, n):
    sum = 0

    for i in range(n):
        sum += int(arr[i])

    return sum


n = int(input("N= "))
arr = input("Enter The Array ")
print(
    f"The sum of the array = {sum(arr , n)}")
