nums=[1,2,3,4]
for i in range(len(nums)):
    print(nums[i],end=" ")

print()
for n in nums:
    print(n)


#operations on the list , like adding and deleting
nums.append(5)
nums.pop()
nums.insert(1,8)

nums.sort()
nums.sort(reverse=True)

# list declaration in python 
arr = [i+1 for i in range(5)]

size = 5
# variable size arr declaration
varr = [1]*size

# 2d array declaration in python
varr = [[i]* size for i in range(5)] # so it is size*5 times array 
print("-------")
print(varr)
print("-------")

for n in arr:
     print(n,end=" ")
print()


for i, n in enumerate(nums):
        print(f"Value: {n}")