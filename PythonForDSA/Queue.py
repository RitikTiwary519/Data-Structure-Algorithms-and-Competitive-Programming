from collections import deque

queue = deque()
queue.append(5)
queue.appendleft(4)
queue.appendleft(3)
print(queue)
queue.append(3)
print(queue)
# same is for pop