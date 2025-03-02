import heapq

# they are under the hood of array

minHeap = []
heapq.heappush(minHeap,3)
heapq.heappush(minHeap,4)
heapq.heappush(minHeap,5)
print(minHeap)

maxHeap= []
heapq.heappush(maxHeap,-3)
heapq.heappush(maxHeap,-2)

while len(maxHeap)!=0:
    top = heapq.heappop(maxHeap)
    print(-1*top)


array = [1,53,2,6,2]
heapq.heapify(array)
