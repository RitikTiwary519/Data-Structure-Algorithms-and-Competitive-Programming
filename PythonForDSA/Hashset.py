mySet = set()
mySet.add(1)
mySet.add(1)
mySet.add(2)
mySet.add(3)

print(len(mySet))

print('is 1 in set',1 in mySet)
print('is 5 in set',5 in mySet)

mySet.remove(2)


# we can also sort of type cast a list in to set
newSet = set([1,1,2,3,4,3,235])
print(newSet)

anotherSet = [i for i in range(5)]
print(anotherSet)
