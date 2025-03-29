#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SGT{
    public:
    vector<int> seg;


public:
    SGT(int n)
    {
        seg.resize(4*n+1);
    }

    void build(int i,int lo,int hi,int v[])
    {
        if(lo==hi)
        {
            seg[i]=v[lo];
            return ;
        }
        int mid=(lo+hi)>>1;
        build(2*i+1,lo,mid,v);
        build(2*i+2,mid+1,hi,v);
        seg[i]=max(seg[2*i+1],seg[2*i+2]);
    }

    void queryUpate(int val,int i,int lo,int hi)
    {
        if(lo==hi)
        {
            cout<<lo+1<<" ";
            seg[i]-=val;
            return;
        }

        int mid=(lo+hi)>>1;

        if(seg[2*i+1]>=val)
        {
            queryUpate(val,2*i+1,lo,mid);
        }
        else
        {
            queryUpate(val,2*i+2,mid+1,hi);
        }

        seg[i]=max(seg[2*i+1],seg[2*i+2]);
    }


};

int main()
{
    int n,m;
    cin>>n>>m;
    int v[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    SGT sgt(n);
    sgt.build(0,0,n-1,v);

    while (m--)
    {
        int x;
        cin>>x;
        if(sgt.seg[0]<x) cout<<0<<" ";
        else
        {
            sgt.queryUpate(x,0,0,n-1);
        }
    }   
}