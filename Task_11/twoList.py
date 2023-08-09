def split_strings(strings):
    first_half = []
    second_half = []

    for s in strings:
        length = len(s)
        middle = length // 2

        first_half.append(s[:middle])
        second_half.append(s[middle:])

    return first_half, second_half


strings = ["aaaccc", "lllsss", "wwwmmm", "ooouuu"]

print(strings)

first_half_list, second_half_list = split_strings(strings)

print(f"First Half List: {first_half_list}")
print(f"Second Half List: {second_half_list}")
