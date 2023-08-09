def sort_array(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    print(f"The arry after sorting {arr}")
    return arr


def second(arr):
    n = len(arr)
    arr_s = sort_array(arr)
    return arr_s[1], arr_s[n-2]


arr = [5, 6, 8, 1, 3, 4, 7, 96, 2, 6]

print(f"The arry {arr} ")

s_smallest,  s_largest = second(arr)

print(
    f"The second smallest element {s_smallest} The second largest element {s_largest} ")
