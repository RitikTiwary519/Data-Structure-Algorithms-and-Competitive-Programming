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


// int main(){

    
//     int T;
//     cin >> T;
//     while(T--){
//         int X, Y, Z, A, B, C;
//         cin >> X >> Y >> Z >> A >> B >> C;
        

//         int happyXL = min(C, Z);
//         int leftXL = max(0, Z - C);
        

//         int happyL = min(B, Y);
//         int remL = max(0, B - Y);

//         int usedXL_for_L = min(remL, leftXL);
//         happyL += usedXL_for_L;
//         int leftXL_for_S = leftXL - usedXL_for_L;
        
       
//         int extraL = max(0, Y - B);
//         int supplyS = X + extraL + leftXL_for_S;
//         int happyS = min(A, supplyS);
        
//         cout << happyXL + happyL + happyS << "\n";
//     }
    
//     return 0;
// }


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

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> v(6,0);
        for (int i = 0; i < 6; i++)
        {
            cin>>v[i];
        }
        
        int extra=0;
        int ans=0;
        for(int i=2;i>=0;i--)
        {
            if(v[i]>=v[i+3])
            {
                ans+=v[i+3];
                extra+=v[i]-v[i+3];
            }
            else
            {
                v[i]+=extra;
                ans+=(min(v[i],v[i+3]));
                extra=max(0,v[i]-v[i+3]);
            }

        }
        cout<<ans<<endl;

    }
    
}