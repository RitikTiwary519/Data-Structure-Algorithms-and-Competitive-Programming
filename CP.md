Below is a **brief CP‑style example** for each of the 28 tactics—no code, just the key observation that each trick unlocks.

---

### 🧩 Structural Tweaks

1. **Fix a parameter**  
    **Example:** Given an array of length n, find the maximum sum of any k-length subarray. First assume k=1 to see that the answer is just the maximum element; this reveals that you’re sliding a window of size k over the array.
    
2. **Reverse the process / solve backwards**  
    **Example:** You start at node S and need to reach node T using operations +1 or ×2. Work backwards from T, seeing whether T is odd (must have come from T–1) or even (maybe from T/2), to trace a shortest path.
    
3. **Solve on paper for small inputs**  
    **Example:** For n=3, list all permutations and count inversions by hand—spot that the total inversions equal n × (n–1)/2. That pattern generalizes immediately.
    
4. **Sort elements**  
    **Example:** You have ranges [lᵢ, rᵢ] and need to pick a point covered by the maximum number of ranges. Sort by right endpoint and greedily select—sorting unveils the optimal choice order.
    
5. **Change the order of operations**  
    **Example:** Compute (a + b) × c for many queries. Instead of recomputing each time, precompute a+b for all pairs first, then multiply—reducing nested loops.
    
6. **Break into smaller subproblems**  
    **Example:** Given a tree, compute sum of distances from each node to all others. First solve for one root, then propagate answers from parent to child—splitting the big problem into two DP passes.
    

---

### 🧠 Model the Problem Differently

7. **Think in terms of states and transitions (DP)**  
    **Example:** Count ways to climb n stairs with 1‑ or 2‑step moves. Model dp[i] = dp[i–1] + dp[i–2] and the recurrence falls out.
    
8. **Turn it into a graph problem**  
    **Example:** You have words and can change one letter at a time; find shortest transformation from “hit” to “cog.” Model each word as a node and edges between one‑letter differences—then BFS.
    
9. **Convert to math or algebraic form**  
    **Example:** Given sum of consecutive integers equals S, solve k × (2a + k–1)/2 = S for integer k and a, turning the search into scanning possible k and solving a linear equation.
    
10. **Consider geometry or coordinate transformations**  
    **Example:** Points on a plane, find the closest pair. Rotate axes by 45° (x+y, x–y) to reduce the problem to two 1D nearest‑neighbor queries.
    

---

### 🔍 Analytical Thinking

11. **Try brute force first and look for patterns**  
    **Example:** For small n (≤5), brute‑generate all colorings of a 3×3 grid avoiding adjacent same‑color cells; observe that valid patterns follow a checkerboard parity.
    
12. **Think about the information being preserved across operations**  
    **Example:** You swap adjacent bits in a binary string—notice the number of 1’s is invariant, so you only care about reaching the target permutation, not bit counts.
    
13. **What’s impossible in this problem? Use it**  
    **Example:** Given n people where each gives a gift to someone else, prove no one can get their own gift if n is odd—use parity to rule out certain matchings.
    
14. **Use the extremal principle: try pushing values to max/min**  
    **Example:** You want to minimize the maximum difference between adjacent elements after you can increment any element by 1. Try pushing one element to its maximum allowed value to see the worst‑case gap.
    
15. **Try proving impossibility rather than finding construction**  
    **Example:** In a graph with more vertices than edges plus one, show there must exist an isolated vertex—use pigeonhole‑style counting to prove no perfect matching exists.
    
16. **Consider what changes and what remains invariant**  
    **Example:** In the “balls‑and‑bins” game where you move one ball each step, notice that the parity of the number of balls in even‑indexed bins never changes.
    
17. **Think about constraints: Can you ignore some?**  
    **Example:** If n≤100 and each value ≤10⁹, but queries only ask for sums on small subranges, you can ignore the large maximum and use an O(n²) prefix‑sum solution safely.
    

---

### 🧪 Experimental / Simulative

18. **Randomize inputs and simulate**  
    **Example:** For a tricky recurrence, generate random small arrays and simulate your candidate greedy to see in which cases it fails, then refine the rule.
    
19. **Try hashing / set tricks**  
    **Example:** Count distinct subarrays of length k. Instead of nested loops, hash each window in O(1) per move with a rolling‑hash into a set to detect uniqueness.
    
20. **Write a brute + optimized version to compare answers**  
    **Example:** For n≤200, implement O(n³) to count zero‑sum triples, and alongside, code your O(n² log n) two‑pointer version; cross‑check on random tests.
    
21. **Do a pen‑and‑paper dry run**  
    **Example:** On the input [3, 1, 4, 2] for your sorting‑plus‑two‑pointer, draw the left/right pointers moving and observe that they always converge inward.
    

---

### 🔁 Transform the Problem

22. **Flip the objective: minimize → maximize, construct → prove**  
    **Example:** Instead of minimizing the number of cuts to split a chocolate bar, ask how many cuts you can avoid if you must end up with k pieces—sometimes the flipped view is easier.
    
23. **Turn the problem into a game or process**  
    **Example:** Two players alternate removing stones; model it as a directed graph of positions and use Sprague–Grundy to decide winning states.
    
24. **Apply binary search on the answer**  
    **Example:** Given an array and a limit L, find the smallest k such that you can partition into ≤k segments each with sum ≤L. Binary‑search k between 1 and n.
    
25. **Consider prefix/suffix structures**  
    **Example:** To answer range‑minimum queries offline, precompute prefix minima and suffix minima in O(n), then each query combines two values in O(1).
    
26. **Try greedy — always**  
    **Example:** Interval scheduling: always pick the next interval with the earliest end time. That simple greedy is optimal.
    
27. **Think recursively, or try divide‑and‑conquer**  
    **Example:** Count inversions in an array by recursively dividing it, counting within halves, then merging while counting cross‑inversions.
    

---

### 🚀 General Principles

28. **Keep moving: Even partial ideas are progress**  
    **Example:** If you’ve identified that sorting helps but aren’t sure how yet, implement the sorted version anyway and print intermediate stats—often that partial code surfaces the final insight.
    

---

Keep these **mini‑examples** in your back pocket: when you see a fresh problem, recall which example felt similar and try that exact trick!


# MORE ADVANCED
Here are **10 more advanced tactics** (beyond the original 28) — each with a tiny CP‑style “aha” example. Treat these as your **29–38**:

---

### 29. Meet‑in‑the‑Middle

**Tactic:** Split n≈40 into two halves of size ~20, enumerate both, then match.  
**Example:** Given up to 40 numbers, count subsets summing to S. Compute all sums of the first 20 into array A, all sums of the last 20 into B, sort B, then for each x∈A binary‑search S–x in B in O(2^(n/2)·(n/2 + log))-time.

### 30. Bitmask DP

**Tactic:** Use a bitmask (size 2ⁿ) as DP state to track chosen elements/subsets.  
**Example:** TSP on n≤16 cities: let dp[mask][i] = min cost to visit set mask and end at city i. Transitions by adding one new city, iterating over submasks.

### 31. Monotonic Queue / Deque Optimization

**Tactic:** Maintain a deque of candidates to answer sliding‑window extremum in O(1) amortized.  
**Example:** For each i, you need the minimum over a[i−k…i]; push/pop into a deque that keeps values in increasing order, so front is the current min.

### 32. Segment Tree / Fenwick Tree for Range Queries

**Tactic:** Preprocess array for point‑update + range‑query or vice versa in O(log n).  
**Example:** Support “add v to A[i]” and “sum of A[l..r]” dynamically by building a Fenwick; each operation is O(log n).

### 33. Sliding‑Window Minimum with Two‑Priced Queues

**Tactic:** Maintain two stacks each with their own monotonic queue to support “pop front” + “push back” + “get min” in O(1).  
**Example:** For a queue where you need the min at any moment, split into “in” and “out” stacks; each stack keeps track of its own minimum prefix.

### 34. Bitwise Tricks & Masks

**Tactic:** Leverage x&(–x), popcount, XOR properties to speed up parity or subset checks.  
**Example:** To check if a subset mask has exactly one bit, test `(mask & (mask–1)) == 0`. To iterate submasks of mask, do `for(sub=mask; sub; sub=(sub–1)&mask)`.

### 35. String‑Hashing (Rolling‑Hash)

**Tactic:** Precompute polynomial hashes to compare substrings in O(1).  
**Example:** Given string S, build `h[i]=h[i−1]·B + (S[i]–‘a’+1)` mod M; then hash of S[l..r] = h[r]–h[l−1]·B^(r−l+1). Now you can check palindrome‑candidates instantly.

### 36. Fast Fourier Transform (FFT / NTT)

**Tactic:** Use convolution to multiply polynomials or count pair‑sums in O(n log n).  
**Example:** Count how many pairs (i,j) satisfy A[i]+B[j]=k by encoding A and B as coefficient arrays and convolving them; the coefficient at k is the answer.

### 37. Centroid Decomposition on Trees

**Tactic:** Recursively pick a centroid, solve queries passing through it, then recurse on subtrees for divide‑and‑conquer.  
**Example:** Count number of paths of length L in a tree. Decompose at centroid, compute distances from centroid to all nodes in each subtree, use two‑sum on those distance arrays, then remove centroid and recurse.

### 38. Mo’s Algorithm for Offline Queries

**Tactic:** Reorder range‑queries [l,r] into a “Hilbert” or block‑sorted sequence so you can add/remove elements in O(1) to maintain a current answer.  
**Example:** Given Q queries asking “#distinct numbers in A[l..r]”, sort by block of l and then r; move your window with pointers and update counts in O(1) per step.

---

**How to use:**

- When you see constraints like n≈40, think **Meet‑in‑the‑Middle**.
    
- When you need DP over subsets, recall **Bitmask DP**.
    
- Range‑updates or queries → **Fenwick/Segment Tree** or **Mo’s** if offline.
    
- String puzzles → **Rolling‑Hash** or **FFT** if counting convolutions.
    
- Tree‑distance or path counts → **Centroid Decomposition**.
    

Keep adding these to your “Pattern Bucket” — familiarizing with when each shines will speed up your next contest!