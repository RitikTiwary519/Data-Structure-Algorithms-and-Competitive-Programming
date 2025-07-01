#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<int, int> cnt;
    set<pair<int,int>> st;
    auto add = [&](int i){
        int x = -v[i];
        cnt[x]++;
        if(st.find({cnt[x]-1, x})!= st.end()) {
            st.erase({cnt[x]-1, x});
        }
        st.insert({cnt[x], x});
    };
    auto remove = [&](int i){
        int x = -v[i];
        int count = cnt[x];
        st.erase({count, x});
        st.insert({count-1, x});
        count-=1;
        cnt[x] = count;
        if(count==0)    {
            cnt.erase(x);
            st.erase({0,x});
        }
    };

    auto ans = [&]() {
        if(st.empty()) return 0;
        return -st.rbegin()->second;
    };

    int i = 0, j = 0;
    while(j <n) {
        if(j == 0) {
            while(j < m) {
                add(j);
                j++;
            }
            cout << ans() << " ";
        } else {
            remove(i);
            add(j);
            i++, j++;
            cout << ans() << " ";
            // if(j==n-1){
            //     cout<<"Current counts: ";
            //     for(auto it: cnt) {
            //         cout<<it.first << " "<< it.second << " "<<endl;
            //     }
            //     cout << endl;
            // }
        }
    }
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    
}