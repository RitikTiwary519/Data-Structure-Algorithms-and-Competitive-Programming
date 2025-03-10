#include <bits/stdc++.h>
#define ll long long
using namespace std;



class SGT{
    vector<int> st,lazy;
    public:
        SGT(int n)
        {
            st.resize(4*n);
            lazy.resize(4*n);
        }
    
        void build(int index,int lo,int hi,int arr[])
        {
            if(lo==hi)
            {
                st[index]=arr[lo];
            }
            int mid = (lo+hi)>>1;
            build(2*index+1,lo,mid,arr);
            build(2*index+2,mid+1,hi,arr);
            st[index]=min(st[2*index+1],st[2*index+2]);

        }

        // void update(int ind,int lo,int hi,int l,int r,int val)
        // {
        //     if(lazy[ind]!=0)
        //     {
        //         st[ind]+=(hi-lo+1)*val;
        //         if(lo!=hi)
        //         {
        //             lazy[2*ind+1]+=lazy[ind];
        //             lazy[2*ind+2]+=lazy[ind];
        //         }
        //         lazy[ind]=0;
        //     }
        //     if(hi<l || lo>r)
        //     {
        //         return;
        //     }
        //     else if()
        // }
};
