#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define ull unsigned long long int
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define space <<" "<<
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pii pair<int,int>
#define pll pair<long long,long long>

using namespace std;

const int mod=1000000007;
const int mod2=998244353;
const int inf32=(int)1e9+5;
const ll inf64=(ll)1e18+5;

ll gcd(ll a,ll b){
	if(a==0) return b;
	return gcd(b%a,a);
}

ll modInverse(ll num,ll pow=mod-2){
	if(pow==0) return 1ll;
	if(pow==1) return num;

	ll temp=modInverse(num,pow/2);
	temp=(temp*temp)%mod;

	if(pow&1) return (num*temp)%mod;
	return temp;		
}

void printVector(vector<int> &v,int n){
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

ll power(ll base,ll exp){
	if(exp==0){
		return 1ll;
	}
	if(exp==1){
		return base;
	}

	ll temp=power(base,exp/2);
	temp=(temp*temp)%mod;

	if(exp&1) return (base*temp)%mod;
	return temp;
}

void solve(){
	int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans=1;
    int last=v[0];

    for(int i=1;i<n;i++){
        if(last+1<v[i]){
            ans++;
            last=v[i];
        }
    }

    cout<<ans<<"\n";
}

int main(){
	fast_io;

	int t=1;
	cin>>t;

	while(t--){
		solve();
	}
	return 0;
}