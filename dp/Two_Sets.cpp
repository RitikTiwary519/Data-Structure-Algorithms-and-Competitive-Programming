#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)





long calculateWays(int K) {
    // Total number of ways two knights can be placed on
    // the chessboard
    long totalWays = ((long) K * K * (K * K - 1)) / 2;

    // Number of ways two knights can attack each other
    long attackingWays = 4 * (K - 1) * (K - 2);

    // Number of ways two knights can be placed without
    // attacking each other
    long ans = totalWays - attackingWays;

    // Return the result for the current chessboard size K
    return ans;
}







// void solve()
// {
//     int n;
//     cin>>n;
//     int sum = (n)*(n+1)/2;
//     int half= sum/2;
//     if(sum%2==1)
//     {
//         cout<<"NO"<<endl;
//         return;
//     }

//     int number = half/n;
//     vector<int> set1;
//     vector<int> set2;
//     set1.push_back();
//     for (int i = 1; i < number; i++)
//     {
//         set1.push_back(i);
//         set1.push_back(n-i);
//     }
//     for (int i = number+1; i < n-number; i++)
//     {
//         set2.push_back(i);
//     }
//     set2.push_back(n);
//     cout<<"YES"<<endl;
    
//     cout<<set1.size()<<endl;

//     for (int i = 0; i < set1.size(); i++)
//     {
//         cout<<set1[i]<<" ";
//     }
//     cout<<endl;
//     cout<<set2.size()<<endl;

//     for (int i = 0; i < set2.size(); i++)
//     {
//         cout<<set2[i]<<" ";
//     }
//     cout<<endl;
    
    
    
// }

int main()
{
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}

// Function to calculate and print the number of ways two
// knights can be placed on a K X K chessboard such that
// they do not attack each other
