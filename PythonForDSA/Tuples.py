# tuples are immutable which puts them to no use in my case , but remember
# incase we want to store key as arrays in python, lists[] , would not work
#in such scenerios we will use , tuples

mymap = {(1,2):5}
print( (1,2) in mymap)