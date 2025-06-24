### defaultdict is just like the dict which is just like the map in c++ but the twist is that it automatically assigns a default value that we specify if the key is not present in the dict
from collections import defaultdict
# Example of defaultdict
dd = defaultdict(int)  # Default value is 0 for int 
ddl = defaultdict(list)  # Default value is an empty list