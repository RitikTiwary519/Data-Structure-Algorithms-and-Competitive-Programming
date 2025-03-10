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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        long long N, M;
        cin >> N >> M;
        vector<long long> seq;
        seq.push_back(N);

        for (int i = 0; i < 63; i++){

            if (!(N & (1LL << i))) {
                long long candidate = N | (1LL << i);
                if (candidate <= M)
                    seq.push_back(candidate);
            }
        }
        
        if(seq.size() < 2)
            cout << -1 << "\n";
        else {
            cout << seq.size() << "\n";
            for (auto x : seq)
                cout << x << " ";
            cout << "\n";
        }
    }
    
    return 0;
}
