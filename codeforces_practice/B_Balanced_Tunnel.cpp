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
//     int n;
//     cin>>n;
//     vector<int> a(n),b(n);
//     unordered_map<int,int> mp;
//     forn(i,0,n)
//     {
//         cin>>a[i];
//     }
//     forn(i,0,n)
//     {
//         cin>>b[i];
//     }
//     stack<int> st;
//     for(int i=n-1;i>=0;i--)
//     {
//         st.push(a[i]);
//     }

//     int ans=0;
//     int it=0;
//     while (!st.empty() && it<n)
//     {
//         int temp = st.top();
//         if(mp[temp]==1)
//         {
//             st.pop();
//             continue;
//         }
//         else 
//         {
//             if(temp!=b[it])
//             {
//                 ans++;
//                 mp[it]=1;
//                 it++;
//             }
//             else
//             {
//                 st.pop();
//                 it++;
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return;

// }

    
// int main()
// {
//     solve();
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        st.push(a[i]);
    }

    int ans = 0;
    int it = 0;

    while (!st.empty() && it < n) {
        int temp = st.top();
        if (mp[temp] == 1) {
            st.pop(); // This car is already processed
            continue;
        }

        if (temp != b[it]) {
            ans++;
            mp[b[it]] = 1; // Mark the car in the exit order as processed
            it++;
        } else {
            st.pop(); // Correct match, process the car
            it++;
        }
    }

    cout << ans << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
