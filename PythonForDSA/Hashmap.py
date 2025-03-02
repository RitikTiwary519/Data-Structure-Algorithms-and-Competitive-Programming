# also know as dictionary
mp= {}
mp["ritik"]=5
mp["ashish"]=4
print(mp)
mp = {"dev":1 , "meet": 2, "ashish":3}
print(mp)
print("Length of map now is ",len(mp))
mp.pop("dev")
print("Length of map after is ",len(mp))


for key in mp:
    print("the key is",key," the value is ",mp[key])


for value in mp.values():
    print(value)

for key,value in mp.items():
    print(key, value)