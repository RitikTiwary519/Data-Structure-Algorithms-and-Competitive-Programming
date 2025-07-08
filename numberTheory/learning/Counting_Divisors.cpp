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
//         int cnt=1;
//         bool fl=true;
//         for(int i=2;(long long)i*i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 cnt++;
//             }
//             if((long long)i*i==n)
//             {
//                 fl=false;
//             }

//         }
//         if(fl==false)
//         {
//             cout<<2*cnt-1<<endl;
//         }
//         else
//         {
//         cout<<2*cnt<<endl;
//         }

//     }
    
// }

#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend())
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL)
#define srt sort(v.begin(), v.end())
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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

int main()
{
    ritik_tiwary;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        bool isPerfectSquare = false;

        for (int i = 1; (ll)i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cnt++;
                if (i != n / i) cnt++;
            }
        }
            cout << cnt << endl;
    }

    return 0;
}
