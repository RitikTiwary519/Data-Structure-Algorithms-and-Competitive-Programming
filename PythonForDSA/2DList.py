n,m= 3, 4
# 2D list declaration in Python
vis = [[False] * n] * m  # This is incorrect for 2D lists in Python
vis = [[False for _ in range(m)] for _ in range(n)]  # Correct way to declare a 2D list
vis = [[False] * m for _ in range(n)]  # Also correct, but not recommended due to reference issues
vis = [[[False] * m for _ in range(n)] for _ in range(m)]  # Correct way to declare a 2D list


# printing 2d list
twoD_list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# 1) simple way to print a 2D list
for row in twoD_list:
    print(row)
# 2) without brackets
for row in twoD_list:
    print(* row)

# 3) using join to print a 2D list
for row in twoD_list:
    print(" ".join(map(str, row))) #this will convert each element to string, then join them with a space and thus strings are printed without brackets

# 4) using list comprehension to print a 2D list
print("\n".join(" ".join(str(x) for x in row) for row in twoD_list))