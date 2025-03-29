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


void solve()
{
    int n;
    cin >> n;
    vector<long long> b(2*n);
    for (int i = 0; i < 2*n; i++){
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    vector<long long> neg(b.begin(), b.begin()+n);
    vector<long long> pos(b.begin()+n, b.end());

    long long sumNeg = 0, sumPos = 0;
    for(auto x : neg) sumNeg += x;
    for(auto x : pos) sumPos += x;
    long long extra = sumPos - sumNeg;

    unordered_set<long long> bSet(b.begin(), b.end());

    if(extra <= 0 || bSet.count(extra)){
        bool FP = false;
        int lim = min(n, 50);
        for (int j = 0; j < lim && !FP; j++){
            for (int i = n-1; i >= max(0, n - 50) && !FP; i--){
                long long d = pos[j] - neg[i];
                long long candidate = extra - 2 * d;
                if(candidate > 0 && !bSet.count(candidate)){
                    swap(pos[j], neg[i]);
                    extra = candidate;
                    FP = true;
                }
            }
        }
    }
    vector<long long> a;
    a.push_back(extra);
    for (int i = 0; i < n; i++){
        a.push_back(pos[i]);
        a.push_back(neg[i]);
    }

    for(auto x : a)
        cout << x << " ";
    cout<<endl;

}


int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
