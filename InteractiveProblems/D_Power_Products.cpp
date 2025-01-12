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

// ll fun(ll n,ll k)
// {
//     ll ans=1;
//     for (ll i = 2; i*i<= n; i++)
//     {
//         if(n%i==0)
//         {
//             ll temp=0;
//             while(n%i==0)
//             {
//                 n/=i;
//                 temp++;
//             }
//             if(temp%k!=0)
//             {
//                 ans*=i;
//             }
//         }
//     }
//     if(n!=1)
//     {
//         return n;
//     }
//     return ans;
    
// }

// void solve()
// {
//     ll n,k;
//     cin>>n>>k;
//     unordered_map<ll,vector<ll>> mp;
//     vector<ll> v(n);
//     ll ans=0;
//     for(ll i=0;i<n;i++)
//     {
//         cin>>v[i];
//         ll x= fun(v[i],k);

//         for(auto it: mp[x])
//         {
//             if(fun(it*v[i],k)==1)
//             {
//                 ans++;
//             }
//         }
//         mp[x].push_back(v[i]);
//     }
    
//     cout<<ans<<endl;
// }


// int main()
// {
//     solve();
// }

int main()
{
    int arr[]={0,0,0,0,0,0,1,1,1};
    int l=0,hi=8;
    while(l<hi)
    {
        int m = (hi+l)/2;
        int val = arr[m];

        if(arr[m]!=1)
        {
            l=m+1;
        }
        else
        {
            hi=m;
        }
    }
    cout<<l<<" with value "<<arr[l]<<endl;
}