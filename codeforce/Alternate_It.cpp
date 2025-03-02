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


// void solve()
// {

//     string str;
//     cin>>str;
//     int n= str.size();
//     int fl=0;
//     int one=0,zero=0;
//     if(str[0]=='0')
//     {
//         zero++;
//     }
//     else
//     {
//         one++;
//     }
    
//     for (int i = 1; i < n; i++)
//     {
//         if(str[i-1]==str[i])
//         {
//             fl++;
//         }
//         if(str[i]=='0')
//         {
//             zero++;
//         }
//         else
//         {
//             one++;
//         }
//     }
//     if(n%2==1)
//     {
//         if(fl==0)
//         {
//             cout<<0<<endl;
//             return;
//         }
//         if(abs(one-zero)==1)
//         {
//             cout<<1<<endl;
//             return;
//         }
//         else if(abs(one-zero)==2 && fl==2)
//         {
//             cout<<2<<endl;
//             return;
//         }
//         else
//         {
//             cout<<3<<endl;
//             return;
//         }
        
//     }
//     if(n%2==0)
//     {
//         if(fl==0)
//         {
//             cout<<0<<endl;
//             return;
//         }
//         if(abs(one-zero)==0)
//         {
//             cout<<1<<endl;
//             return;
//         }
//         else if(abs(one-zero)==2 && fl==2)
//         {
//             cout<<2<<endl;
//             return;
//         }
//         else
//         {
//             cout<<3<<endl;
//             return;
//         }       
//     }

    

// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }
    
// }



#include<bits/stdc++.h>
 
#define int long long
 
#define vi vector<int>
#define vvi vector<vi>
#define f(i,n) for(int i=0; i<n; i++)
#define rf(i,n) for(int i=n-1; i>=0; i++)
#define all(v) v.begin(),v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define srt(v) sort(all(v))
#define Error(x...) { cout << "(" << #x << ")" << " = ( "; printIt(x); }
 
using namespace std;
 
void printv(vi v){ for(auto val: v) cout << val << ' '; cout << '\n';}
void prints(vector<string> v){ for(auto val: v) cout << val << ' '; cout << '\n';}

void solve(){
    string s;
    cin >> s;
    int n= s.size();
    if(n==1){
        cout << 0 << endl;
        return;
    }

    if(n&1){
        int curr=0;
        f(i,n-1){
            if(s[i]==s[i+1]) curr++;
        }
        if(curr==0){
            cout << 0 << endl;
            return;
        }
        int zeros=0;
        int ones=0;
        f(i,n){
            if(s[i]=='1') ones++;
            else zeros++;
        }

        if(zeros==(n/2) || ones==(n/2)){
            cout << 1 << endl;
            return;
        }
        
        if(zeros==((n+3)/2) || ones==((n+3)/2)){
            cout << 2 << endl;
            return;
        }
        else{
            cout << 3 << endl;
            return;
        }

    }
    else{
        int curr=0;
        f(i,n-1){
            if(s[i]==s[i+1]) curr++;
        }
        if(curr==0){
            cout << 0 << endl;
            return;
        }
        int zeros=0;
        int ones=0;
        f(i,n){
            if(s[i]=='1') ones++;
            else zeros++;
        }

        if(zeros==(n/2) || ones==(n/2)){
            cout << 1 << endl;
            return;
        }
        if(zeros==((n+2)/2) || ones==((n+2)/2)){
            cout << 2 << endl;
            return;
        }
        else{
            cout << 3 << endl;
            return;
        }


    }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}