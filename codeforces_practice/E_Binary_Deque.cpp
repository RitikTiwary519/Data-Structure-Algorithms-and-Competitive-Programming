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

// void solve()
// {
//     ll n,m;
//     cin>>n>>m;
//     vector<int> v(n,0),pref(n,0);
//     forn(i,0,n) cin>>v[i];

//     int j=0;
//     while(j<n && v[j]==0) j++;

//     int sum=accumulate(v.begin(),v.end(),0);
//     if(sum<m) 
//     {
//         cout<<-1<<endl;
//         return;
        
//     }
//     if(j==n && m!=0)
//     {
//         cout<<-1<<endl;
//     }
//     else if(j==n && m==0)
//     {
//         cout<<0<<endl;
//     }



//     int cnt=0;
//     int k=j;
//     while(j<n)
//     {
//         if(v[j]==1)
//         {
//             pref[j]=0;
//         }
//         else
//         {
//             cnt++;
//             pref[j]=cnt;
//         }
//         j++;
//     }
//     cnt=0;
//     while(k>=0) 
//     {
//         if(v[k]==1)
//         {
//             pref[k]=0;
//         }
//         else
//         {
//             cnt++;
//             pref[k]=cnt;
//         }
//         k--;
//     }


//     int diff=sum-m;

//     int first=0,second=n-1;
//     int operations=0;
//     while(diff!=0)
//     {
//         if(pref[first]==0)
//         {
//             diff--;
//             first++;
//             operations++;
//         }
//         else if(pref[second]==0)
//         {
//             diff--;
//             second--;
//             operations++;
//         }
//         else if(pref[first]<=pref[second])
//         {
//             first++;
//             operations++;
//         }
//         else if(pref[first]>pref[second])
//         {
//             second--;
//             operations++;
//         }
//     }

//     cout<<operations<<endl;

// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }

    
// }