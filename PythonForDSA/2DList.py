n,m= 3, 4
# 2D list declaration in Python
vis = [[False] * n] * m  # This is incorrect for 2D lists in Python
vis = [[False for _ in range(m)] for _ in range(n)]  # Correct way to declare a 2D list
vis = [[False] * m for _ in range(n)]  # Also correct, but not recommended due to reference issues
vis = [[[False] * m for _ in range(n)] for _ in range(m)]  # Correct way to declare a 2D list