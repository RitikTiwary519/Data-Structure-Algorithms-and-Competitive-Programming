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

 
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;
 
        long long count00 = 0, count11 = 0, countMixed = 0;
        for (int i = 0; i < N; i++){
            if (A[i] == B[i]){
                if (A[i] == '0') count00++;
                else count11++;
            } else {
                countMixed++;
            }
        }
 
        bool possible = false;
        if(N % 2 == 0){
            if ((count00 % 2 == 0) && (count11 % 2 == 0) && (countMixed % 2 == 0))
                possible = true;
        } else {
            int oddCount = (count00 % 2) + (count11 % 2) + (countMixed % 2);
            if(oddCount == 1)
                possible = true;
        }
 
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
