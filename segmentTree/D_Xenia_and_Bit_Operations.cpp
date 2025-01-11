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



void build(ll ind,ll lo,ll hi,vector<ll> &arr,vector<ll> &seg,ll orr)
{
    if(lo==hi)
    {
        seg[ind]=arr[lo];
        return;
    }

    ll mid=(lo+hi)/2;
    build(2*ind+1,lo,mid,arr,seg,!orr);
    build(2*ind+2,mid+1,hi,arr,seg,!orr);

    if(orr)
    {
        seg[ind]=seg[2*ind+1] | seg[2*ind+2];
    }
    else
    {
        seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
    }
}

void update(ll ind,ll lo,ll hi,ll i,ll val,vector<ll> &seg, ll orr)
{
    if(lo==hi)
    {
        seg[ind]=val;
        return;
    }
    ll mid=(lo+hi)/2;
    if(i<=mid)
    {
        update(2*ind+1,lo,mid,i,val,seg,!orr);
    }
    else
    {
        update(2*ind+2,mid+1,hi,i,val,seg,!orr);
    }

    if(orr)
    {
        seg[ind]=seg[2*ind+1] | seg[2*ind+2];
    }
    else
    {
        seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
    }

}
int main()
{
    int t;
    t=1;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ele=pow(2,n);
        vector<ll> arr(ele,0), seg(4*ele+1,0);

        forn(i,0,pow(2,n)) cin>>arr[i];
        if((n&2)==1)
        {
            build(0,0,ele-1,arr,seg,1);
        }
        else
        {
            build(0,0,ele-1,arr,seg,0);
        }

        while(m--)
        {
            ll i,val;
            cin>>i>>val;
            i--;
            if((n%2)==1)    
            {
                update(0,0,ele-1,i,val,seg,1);
            }
            else
            {
                update(0,0,ele-1,i,val,seg,0);               
            }
            cout<<seg[0]<<endl;
        }
    }
    
}