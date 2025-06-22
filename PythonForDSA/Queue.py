from collections import deque

queue = deque()
queue.append(5)
queue.appendleft(4)
queue.appendleft(3)
print(queue)
queue.append(3)
print(queue)
# same is for pop

# Remember that we don't have funcationality like peek in deque
# we can use indexing to get the first element
print(queue[0])  # This will give the first element
print(queue[-1])  # This will give the last element