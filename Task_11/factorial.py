def factorial(x):
    if x < 0:
        return "Factorial is not defined for negative numbers"
    
    if (x == 0):
        return 1
    return x * factorial(x-1)


print()


num = int(input("Eneter a number: "))
print(f"The Factorial of {num} = {factorial(num)}")
