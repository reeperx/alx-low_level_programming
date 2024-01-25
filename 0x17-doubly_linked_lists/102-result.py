#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

max_palindrome = 0
for i in range(100, 1000):
    for j in range(i, 1000):  # Start from i to avoid duplicate pairs
        product = i * j
        if is_palindrome(product) and product > max_palindrome:
            max_palindrome = product

# Write the result to a file
with open('102-result', 'w') as f:
    f.write(str(max_palindrome))
