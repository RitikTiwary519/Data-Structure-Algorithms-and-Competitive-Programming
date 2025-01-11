#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int fl=0;
        if(n==1)
        {
            cout<<v[0]<<endl;
            fl=1;
        }
        int val=INT_MIN;
 
        for(int i=0;i<n;)
        {
           
           int parity=-1;
           int curr=0;
            for(i;i<n;i++)
            {

                if(parity!=abs((v[i]%2)))
                {
                    parity=abs(v[i]%2);
                    
                    curr=curr+v[i];
                    if(curr<0)
                    {
                        curr=0;
                    }
                  // cout<<curr<<" ";
                    val=max(val,curr);
                }
                else{
                    break;
                }
            }
         //  cout<<"\n............"<<endl;
           // Max=max(Max,val);
        }
        if(fl==0)
        cout<<val<<endl;
    }
    
}

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
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<pair<int,int>> v(n);
//         int parity=-1;
//         for(int i=0;i<n;i++)
//         {
//             int x;
//             cin>>x;
//             if(parity!=abs(x%2))
//             {
//                 v[i]={x,0};
//             }
//             else{
//                 v[i]={x,1};
//             }
//             parity=abs(x%2);
//         }
//         int sum=0;
//         for(auto it=v.begin();it<v.end();it++)
//         {
//             if()
//         }


//     }
    
    
// }