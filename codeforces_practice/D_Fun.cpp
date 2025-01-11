#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         ll n,x;
// //         cin>>n>>x;
// //         ll val=x*x-2*n;

// //         vector<vector<ll>> vt;

// //         for (ll i = 1; i <= val; i++)
// //         {
// //             for(ll j=1;j<=val;j++)
// //             {
// //                 for(ll k=1;k<=val;k++)
// //                 {
// //                     if(i*i+j*j+k*k==val)
// //                     {
// //                         vector<ll> temp;
// //                         temp.push_back(i);
// //                         temp.push_back(j);
// //                         temp.push_back(k);
// //                     }
// //                 }
// //             }  
// //         }
// //         cout<<vt.size()<<endl;
        
// //     }
    
// // }


// #include <iostream>
// using namespace std;

// int countTriplets(int n, int x) {
//     int count = 0;

//     for (int a = 1; a <= x; ++a) {
//         for (int b = 1; b + a <= x; ++b) {
//             for (int c = 1; c + a + b <= x; ++c) {
//                 if (a * b + a * c + b * c <= n) {
//                     ++count;
//                 }
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         cout << countTriplets(n, x) << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// long long countTriplets(int n, int x) {
//     long long count = 0;
//     int maxSum = x * x - 2 * n;

//     for (int a = 1; a <= x; ++a) {
//         for (int b = 1; b <= x; ++b) {
//             for (int c = 1; c <= x; ++c) {
//                 int sum = a + b + c;
//                 if (sum <= x && (a * a + b * b + c * c) <= maxSum) {
//                     count++;
//                 }
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         cout << countTriplets(n, x) << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

long long twosum(ll sum)
{
    return sum-1;
}

long long countTriplets(int n, int x) {
    long long count = 0;

    int val= x*x - 2*n;
    int cnt=0;

    for(int i=1;i<val;i++)
    {
      cnt+=(twosum(val-i));  
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << countTriplets(n, x) << endl;
    }

    return 0;
}
