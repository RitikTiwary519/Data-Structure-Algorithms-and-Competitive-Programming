// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define int ll
// #define rsrt sort(v.rbegin(), v.rend());
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)



// void solve()
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int> v(k);
    
//     vector<int> sieve(n+1,1);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }

//     sort(v.begin(), v.end());
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int jump = v[i]; jump <=n; jump += v[i])
//         {
//             if (sieve[jump] == 1)
//             {
//                 ans++;
//                 sieve[jump] = 0; // Mark as not prime
//             }
//         }
//     }
//     cout<< ans << endl;
// }

// signed main()
// {
//     int t;
//     t=1;
//     while (t--)
//     {
//         solve();    
//     }
    
    
// }

/*
Problem Name: Prime Multiples
Problem Link: https://cses.fi/problemset/task/2185
Author: Sachin Srivastava (mrsac7)
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int INF = 1LL<<60;
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n,k; cin>>n>>k;
    //inclusion-exclusion
    int ans = 0;
    int a[k];
    for (int i = 0; i < k; i++) 
        cin>>a[i];

    for (int i = 1; i < 1<<k; i++) {
        int x = -1;
        if (__builtin_popcount(i)&1) x = 1;
        int y = n;
        int z = 1;
        for (int j = 0; j < k; j++) {
            if (i>>j&1) {
                if (z >= n/a[j] + 1) {
                    z = INF;
                    break;
                }
                z = z*a[j];
            }
        }
        y /= z;
        ans += x*y;
    }
    cout<<ans;
}