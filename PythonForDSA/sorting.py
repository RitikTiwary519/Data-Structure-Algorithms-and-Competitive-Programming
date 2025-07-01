#sorting using a custom comparator

from functools import cmp_to_key
from typing import Counter

v = [1, 2, 3]

def comp(a, b):
    return (a > b) - (a < b)  # This gives 1, -1, or 0

sorted_v = sorted(v, key=cmp_to_key(lambda a, b: comp(b, a)))  # to reverse
print(sorted_v)


# counting 
array = [1,1,1,2,3,3]
print("Count of 1:", Counter(array))