/* case of sliding window questino*/
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
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         vector<int> f(n),h(n);
//         for(int k=0;k<n;k++){ cin>>f[k];}
//         for(int k=0;k<n;k++){ cin>>h[k];}
//         int i=0,j=1;
//         int ans=INT_MIN;
//         int curr=f[0];
//         while (j<n)
//         {
//             if(h[j-1]%h[j]==0)
//             {
//                 curr+=f[j];
//                 j++;
//             }
//             else{
//                 i=j;
//                 curr=f[i];
//             }
//             while (curr>k)
//             {
//                 curr-=f[i--];
//             }
//             ans=max(ans,j-i+1);
//             j++;
            
            
//         }
//         cout<<ans<<endl;
        
        
//     }
    
// }


// ----------- Code Starts Here ----------- //
 
// bool isPossible(ll mid, ll n, ll arr[], ll h) {
 
// 	for(ll i = 0; i < n; i++) {
// 		if(arr[i] < mid) {
// 			ll sub = mid - arr[i];
// 			if(h < sub) return false;
// 			h -= sub;
// 		}
// 	}
 
// 	return true;
 
// }
 
void solve() 
{
	ll n, k;
	cin >> n >> k;
 
	ll arr[n];
	for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
 
	ll hei[n];
	for (int i = 0; i < n; i++)
    {
        cin>>hei[i];
    }
    
 ll curr = arr[0];
	ll ans = 0;
	ll i = 0;
	ll j = 1; 
	

	if(curr <= k) ans = 1;
 
	while(j < n) {
		if(hei[j - 1] % hei[j] == 0) curr += arr[j];
		else {
			curr = arr[j];
			i = j;
		}
 
		while(curr > k) {
			curr -= arr[i++];
		}
 
		// cout << curr << " " << i << " " << j << nl;
 
		ans = max(ans, j - i + 1);
		j++;
 
	}
 
	cout << ans <<endl;
 
}
 
int main()
{
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}