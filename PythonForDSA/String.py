
# string can be converted to int
print(int("123")+int("123"))
#  int can be converted to strings
print(str(123)+str(123))


#strings are immutable which means ,every time we declare it 
# they are declared new 
# operations such as
str="hello"
# str[0]="a" are not possible
# but
str= str+str
print(str) # are possible
print(ord("a"))

# they are joinable using join, with different deliminator 
strings= ["hello", "ritik"]
print(" ".join(strings))



# solving  main problem of immutability 
s = "hello"
s_list = list(s)  # Convert string to list

s_list[1] = "a"  # Modify character at index 1

s = "".join(s_list)  # Convert list back to string
print(s)  # Output: "hallo"
