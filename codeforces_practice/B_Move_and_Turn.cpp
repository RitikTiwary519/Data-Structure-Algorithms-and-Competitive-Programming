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

// void solve(int x,int y,int turns,string dir,set<pair<int,int>> &st)
// {
//     if(turns==0)
//     {
//         st.insert({x,y});
//         return;
//     }
//     if(dir=="UP")
//     {
//         solve(x+1,y,turns-1,"TURN",st);
//         solve(x-1,y,turns-1,"TURN",st);
//     }
//     else if(dir=="TURN")
//     {
//         solve(x,y+1,turns-1,"UP",st);
//         solve(x,y-1,turns-1,"UP",st);
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     set<pair<int,int>> st;
//     int x=0,y=0;

//     solve(x,y+1,n-1,"UP",st);
//     solve(x,y-1,n-1,"UP",st);
//     solve(x-1,y,n-1,"TURN",st);
//     solve(x+1,y,n-1,"TURN",st);
//     cout<<st.size()<<endl;
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

// Memoization map
typedef tuple<int, int, int, string> state;
map<state, set<pair<int, int>>> memo;

// Memoized solve function
set<pair<int, int>> solve(int x, int y, int turns, string dir) {
    state current_state = {x, y, turns, dir};

    // Check if the result is already computed
    if (memo.find(current_state) != memo.end()) {
        return memo[current_state];
    }

    set<pair<int, int>> result;

    if (turns == 0) {
        result.insert({x, y});
        return memo[current_state] = result;
    }

    if (dir == "UP") {
        set<pair<int, int>> s1 = solve(x + 1, y, turns - 1, "TURN");
        set<pair<int, int>> s2 = solve(x - 1, y, turns - 1, "TURN");
        result.insert(s1.begin(), s1.end());
        result.insert(s2.begin(), s2.end());
    } else if (dir == "TURN") {
        set<pair<int, int>> s1 = solve(x, y + 1, turns - 1, "UP");
        set<pair<int, int>> s2 = solve(x, y - 1, turns - 1, "UP");
        result.insert(s1.begin(), s1.end());
        result.insert(s2.begin(), s2.end());
    }

    return memo[current_state] = result;
}

int main() {
    int n;
    cin >> n;
    set<pair<int, int>> st;
    int x = 0, y = 0;

    st = solve(x, y + 1, n - 1, "UP");
    set<pair<int, int>> temp1 = solve(x, y - 1, n - 1, "UP");
    set<pair<int, int>> temp2 = solve(x - 1, y, n - 1, "TURN");
    set<pair<int, int>> temp3 = solve(x + 1, y, n - 1, "TURN");

    st.insert(temp1.begin(), temp1.end());
    st.insert(temp2.begin(), temp2.end());
    st.insert(temp3.begin(), temp3.end());

    cout << st.size() << endl;
}
