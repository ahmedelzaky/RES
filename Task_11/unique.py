def unique(arr):
    unique_arr = []
    for i in arr:
        if i not in unique_arr:
            unique_arr.append(i)
    return unique_arr


arr = input("Enter the array: ").split()

print(unique(arr))
