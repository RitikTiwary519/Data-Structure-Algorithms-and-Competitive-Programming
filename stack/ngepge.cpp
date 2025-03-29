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
    int n = 7;
    vector<int> v={5,4,3,5,7,7,2};
    vector<int> pge(n,-1),nge(n,n);
    stack<int> st;

    for (int i=0;i<n;i++)
    {
        if(!st.empty())
        {
            if(v[st.top()]<v[i])
            {
                nge[st.top()]=i;
                while(!st.empty() && v[st.top()]<v[i])
                {
                    nge[st.top()]=i;
                    st.pop();
                }
            }
            else if(v[st.top()]>v[i])
            {
                pge[i]=st.top();
            }
        }
        st.push(i);
    }

    for(auto it: nge)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto ti: pge)
    {
        cout<<ti<<" ";
    }
    
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     vector<int> v = {5,4,3,5,7,7,2};
//     vector<int> pge(n, -1), nge(n, n);
//     stack<int> st;

//     // Find Next Greater Element (NGE)
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && v[st.top()] < v[i])
//         {
//             nge[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }

//     // Clear stack for PGE calculation
//     while (!st.empty()) st.pop();

//     // Find Previous Greater Element (PGE)
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && v[st.top()] <= v[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             pge[i] = st.top();
//         }
//         st.push(i);
//     }

//     // Output results
//     cout << "Next Greater Elements: ";
//     for (auto it : nge)
//     {
//         cout << it << " ";
//     }
//     cout << endl << "Previous Greater Elements: ";
//     for (auto ti : pge)
//     {
//         cout << ti << " ";
//     }
    
//     return 0;
// }