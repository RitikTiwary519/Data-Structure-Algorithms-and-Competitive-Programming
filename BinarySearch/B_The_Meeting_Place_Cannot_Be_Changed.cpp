// #include <bits/stdc++.h>
// #define ll long long
// #define int ll
// #define int long double
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

// pair<double, double> unionof(double &l, double &r, double temp1, double temp2)
// {
//     l = max(l, temp1);
//     r = min(r, temp2);
//     return {l, r};
// }

// bool fun(double mid, vector<long double> &p, vector< long double> &s, int n)
// {
//     double l = p[0] - s[0] * mid;
//     double r = p[0] + s[0] * mid;
//     for (int i = 1; i < n; i++)
//     {
//         double temp1 = p[i] - mid * s[i];
//         double temp2 = p[i] + mid * s[i];
//         auto temp = unionof(l, r, temp1, temp2);
//         l = temp.first;
//         r = temp.second;
//         if (l > r)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<long double> p(n), s(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cin >> s[j];
//     }

//     long double lo = 0;
//     long double hi = 1e9;

//     // Modified binary search with precision
//     while (lo <= hi) // Converging to 6 decimal places
//     {
//         double mid = lo + (hi - lo) / 2.0;
//         if (fun(mid, p, s, n))
//         {
//             hi = mid-0.000001;
//         }
//         else
//         {
//             lo = mid+0.000001;
//         }
//     }

//     // Output result with fixed precision
//     cout<<setprecision(12) << lo << endl;
// }

// signed main()
// {
//     ritik_tiwary; // Ensures fast I/O
//     solve();
//     return 0;
// }


// #include <bits/stdc++.h>

// // #include<ext/pb_ds/assoc_container.hpp>
// // #include<ext/pb_ds/tree_policy.hpp>

// using namespace std;
// // using namespace __gnu_pbds;

// // typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
// #define pb push_back
// #define all(x) (x).begin(), (x).end()

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;

// #define yes cout << "YES\n";
// #define no cout << "NO\n";
// #define f(i, x, n)       for (ll i = x; i < n; i++)
// #define rf(i, x, n)      for (ll i = x; i >= n; i--)

// const ll mod = 1e9+7;
// const ll mod2 = 998244353;
// const ll inf = 1e18;
// const ll N = 1e5+5;



// bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) { return (a.second < b.second); }
// ll power(ll n,ll a){ ll res=1; while(a){ if(a%2) res*=n,a--; else   n*=n,a/=2;} return res;}
// ll modpower(ll n,ll a,ll p){ ll res=1; while(a){ if(a%2) res= ((res*n)%p) ,a--; else n=((n*n)%p),a/=2;} return res;}
// ll fastprime(ll a){ if (((a != 2) && (a % 2 == 0)) || (a < 2)) return 0;  for(ll i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}
// ll mod_mul_inverse(ll a,ll b) {return modpower(a , b-2, b);}
// ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}



// void solve(){
//   ll n;
//   cin >> n;

//   vector<ll> v(n), se(n);
//   f(i, 0, n) cin >> v[i];
//   f(i, 0, n) cin >> se[i];

//   lld s = 0, e = 1e10;
//   lld ans = 1e10;

//   function<bool(lld)> check = [&](lld m){
//     lld l = 0; lld r = 1e9;
//     f(i, 0, n){
//       lld range = se[i] * m;
//       if(l < v[i] - range){
//         l = v[i] - range;
//       }

//       if(r > v[i] + range){
//         r = range + v[i];
//       }
//     }

//     if(l <= r){
//       return true;
//     }

//     return false;
//   };

//   while(s <= e){
//     lld m = s + (e - s)/2;
//     if(check(m)){
//       ans = m;
//       e = m - 0.000001;
//     }else{
//       s = m + 0.000001;
//     }
//   }

//   cout << setprecision(10) << ans << "\n";
// }

// int main() {

//   // init();
  
//   ll t = 1;
//   // cin >> t;
//   for (ll T = 1; T <= t; T++) {
//     // cout << "Case #" << T << ": ";
//     solve();
//   }
//   return 0;
// }