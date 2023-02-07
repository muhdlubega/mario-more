from cs50 import get_int

# get input from user between 1-8 using get_int
while True:
    n = get_int("Height: ")
    if n > 0 and n < 9:
        break

# print out pyramid using its parameters
for i in range(n):
    print(" " * (n-1-i), end="")
    print("#" * (i+1), end="  ")
    print("#" * (i+1), end="")
    print("" * (n-1-i))