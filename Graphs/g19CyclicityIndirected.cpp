#include <bits/stdc++.h>
using namespace std;

//https://takeuforward.org/data-structure/detect-cycle-in-a-directed-graph-using-dfs-g-19/
/* we have to find the number of terminating nodes. which means any node where every path
leads to a termination node
observation
1) This is only possible when not a single path is part of cylce or does not leads to 
cycle
*/