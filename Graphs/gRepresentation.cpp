#include <bits/stdc++.h>
using namespace std;

//https://takeuforward.org/graph/graph-representation-in-c/
// int main()
// {
//     //matrix way
//     int n,m;
//     cin>>n>>m;
//     //where n is vertices and m is edges
//     int arr[100][100];
//     memset(arr,sizeof(arr),-1);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             int x,y;
//             cin>>x>>y;
//             arr[i][j]=1;
//             arr[j][i]=1;
//         }
//     }
//     //space complexity: O(n*n)
//     //time complexity same

// }

int main()
{
    int n,m;
    cin>>n>>m;
    //we will first make an array of vectors
    vector<int> arr[100]; //0 based indexing
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y); //pushing back y in xth array
        arr[y].push_back(x); //pushing bck x in yth array

    }
    //space complexity is O(2E) because it is visiting an edge twice

}