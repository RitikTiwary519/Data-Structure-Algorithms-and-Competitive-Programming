// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int binarySearch(int rem, int x, int y) {
// //     int low = 0, high = 1e9; // Setting high to a large value

// //     while (low < high) {
// //         int mid = low + (high - low) / 2;

// //         if (rem + y * mid < x) {
// //             low = mid + 1;
// //         } else {
// //             high = mid;
// //         }
// //     }

// //     return low;
// // }


// // int solve()
// // {
// //     int n,p,x,y;
// //     cin>>n>>p>>x>>y;
// //     if(x>=n || (p))
// //     {
// //         return 0;
// //     }
// //     if(x==0 && y==0)
// //     {
// //         int re=n%p;
// //         int an=n/p;
// //         return an+re;
// //     }
// //     int rem=n%p;
// //     int i = binarySearch(rem, x, y);
// //     n=n-(rem+y*i);
// //     n=n-min(y,n/p);
// //    // int re=n%p;
// //     return (n/p);
    
// // }

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         cout<<solve()<<endl;
// //     }
    
// // }


// #include <bits/stdc++.h>
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define input                  \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         ll x;                  \
//         cin >> x;              \
//         v.push_back(x);        \
//     }
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define deb(v)            \
//     for (auto &i : v)     \
//     {                     \
//         cout << i << ' '; \
//     }
// #define arrinput               \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         cin >> arr[i];         \
//     }
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// using namespace std;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)



// int solve()
// {
//     int m,k,a1,ak;
//     cin>>m>>k>>a1>>ak;
//     if((a1>m)||((m%k==0) && (m/k)<=ak))
//     {
//         return 0;
//     }
//     if((m-k*ak)<=k && (m-k*ak)>=0)
//     {
//         return (m-k*ak);
//     }
//     if(a1>=m%k)
//     {
//     int i=(a1-m%k)/k;
//     if(m/k <=i+ak)
//     {
//      return 0;   
//     }
//     else{
//         return m/k-i-ak;
//     }
//     }
//     else{
//         return m/k+m%k;
//     }

// };

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         cout<<solve()<<endl;
//     }
    
// }

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		int taken_k = m / k;
		int taken_1 = m % k;
		int taken_fancy_1 = max(0, taken_1 - a1);
		int left_regular_1 = max(0, a1 - taken_1);
		int taken_fancy_k = max(0, taken_k - ak);
		int to_replace = min(left_regular_1 / k, taken_fancy_k);
		int ans = taken_fancy_1 + taken_fancy_k - to_replace;
		cout << ans << endl;
	}
}
