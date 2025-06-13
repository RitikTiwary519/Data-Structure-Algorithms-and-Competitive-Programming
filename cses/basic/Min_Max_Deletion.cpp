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

int main(){

    int T;
    cin >> T;
    while(T--){
        int N, Q;
        cin >> N >> Q;
        vector<ll> A(N+2, 0);
        for(int i = 1; i <= N; i++){
            cin >> A[i];
        }

        ll S = 0;
        for(int i = 1; i < N; i++){
            S += min(A[i], A[i+1]);
        }


        while(Q--){
            int idx;
            ll X;
            cin >> idx >> X;
            if(idx > 1)    S -= min(A[idx-1], A[idx]);
            if(idx < N)    S -= min(A[idx],   A[idx+1]);
            A[idx] = X;
            if(idx > 1)    S += min(A[idx-1], A[idx]);
            if(idx < N)    S += min(A[idx],   A[idx+1]);

            cout << S << "\n";
        }
    }

    return 0;
}
