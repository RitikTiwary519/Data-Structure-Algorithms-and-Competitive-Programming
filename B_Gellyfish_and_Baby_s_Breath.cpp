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

static const int MAXN = 100000;
static const int MOD  = 998244353;
long long pow2[MAXN+1];

int main(){

    pow2[0] = 1;
    for(int i = 1; i <= MAXN; i++){
        pow2[i] = (pow2[i-1] * 2LL) % MOD;
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> p(n), q(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        for(int i = 0; i < n; i++){
            cin >> q[i];
        }

        vector<int> P_max(n), P_idx(n);
        P_max[0] = p[0];
        P_idx[0] = 0;
        for(int i = 1; i < n; i++){
            if(p[i] > P_max[i-1]){
                P_max[i] = p[i];
                P_idx[i] = i;
            } else {
                P_max[i] = P_max[i-1];
                P_idx[i] = P_idx[i-1];
            }
        }
        vector<int> Q_max(n), Q_idx(n);
        Q_max[0] = q[0];
        Q_idx[0] = 0;
        for(int i = 1; i < n; i++){
            if(q[i] > Q_max[i-1]){
                Q_max[i] = q[i];
                Q_idx[i] = i;
            } else {
                Q_max[i] = Q_max[i-1];
                Q_idx[i] = Q_idx[i-1];
            }
        }


        for(int i = 0; i < n; i++){
            int a = P_max[i];
            int idxP = P_idx[i];
            int b = Q_max[i];   
            int idxQ = Q_idx[i];

            ll D, other;
            if(a > b){

                D = a;
                other = q[i - idxP];
            }
            else if(b > a){

                D = b;
                other = p[i - idxQ];
            }
            else {

                D = a; 
                ll other1 = q[i - idxP];
                ll other2 = p[i - idxQ];
                other = max(other1, other2);
            }

            ll ans = ( pow2[D] + pow2[other] ) % MOD;
            cout << ans << (i+1 < n ? ' ' : '\n');
        }
    }

    return 0;
}