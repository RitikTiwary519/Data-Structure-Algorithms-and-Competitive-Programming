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
    vector<char> opL(n), opR(n);
    vector<int> parL(n), parR(n);
    for (int i = 0; i < n; i++){
        cin >> opL[i] >> parL[i] >> opR[i] >> parR[i];
    }

    long long alpha = 1, beta = 1, gamma = 0;

    for (int i = n - 1; i >= 0; i--){

        long long BD = 0;
        long long BM = 0;
        if(opL[i] == '+'){
            BD = parL[i];
        } else { 
            BM = parL[i] - 1;
        }


        long long BRC = 0;
        long long bonusR_mult = 0;
        if(opR[i] == '+'){
            BRC = parR[i];
        } else { 
            bonusR_mult = parR[i] - 1;
        }

        long long M = max(alpha, beta);


        long long new_alpha = alpha + M * BM;
        long long new_beta  = beta  + M * bonusR_mult;
        long long new_gamma = gamma + M * (BD + BRC);

        alpha = new_alpha;
        beta  = new_beta;
        gamma = new_gamma;
    }

    long long ans = alpha * 1 + beta * 1 + gamma;
    cout << ans <<endl;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
       solve();
    }
    return 0;
}
