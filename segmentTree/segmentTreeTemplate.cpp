// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// class SGT{
//     vector<int> seg;
//     SGT(int n)
//     {
//         seg.resize(4*n+1);
//     }

//     void build(int ind,int lo,int hi,int arr[])
//     {
//         if(lo==hi)
//         {
//             seg[ind]=arr[lo];
//             return;
//         }

//         int mid=(lo+hi)/2;

//         build(2*ind+1,lo,mid,arr);
//         build(2*ind+2,mid+1,hi,arr);

//         seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
//     }

//     int query(int ind,int lo,int hi,int l,int r)
//     {
//         //no overlapping condition 
//         if(lo>r || hi<l)
//         {
//             return INT_MAX;
//         }

//         //complete overlapping
//         else if(lo<=l && r<=hi)
//         {
//             return seg[ind];
//         }

//         else
//         {
//             int mid=(lo+hi)/2;

//             int left=query(2*ind+1,lo,mid,l,r);
//             int right=query(2*ind+2,mid+1,hi,l,r);

//             return min(left,right);
//         }
//     }

//     void update(int ind,int lo,int hi,int i,int val)
//     {
//         if(lo==hi) 
//         {
//             seg[ind]=val;
//         }
//         int mid=(lo+hi)/2;

//         if(i<mid)
//         {
//             update(2*ind+1,lo,mid,i,val);
//         }
//         else
//         {
//             update(2*ind+2,mid+1,hi,i,val);
//         }
//         seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
//     }
// };



#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SGT{
    vector<int> seg;

public:
    SGT(int n)
    {
        seg.resize(4*n+1);
    }

    void build(int ind, int lo, int hi, int arr[])
    {
        if (lo == hi)
        {
            seg[ind] = arr[lo];
            return; // Base case should return here
        }

        int mid = (lo + hi) / 2;

        build(2*ind + 1, lo, mid, arr);
        build(2*ind + 2, mid + 1, hi, arr);

        seg[ind] = min(seg[2*ind + 1], seg[2*ind + 2]);
    }

    int query(int ind, int lo, int hi, int l, int r)
    {
        // No overlapping condition 
        if (lo > r || hi < l)
        {
            return INT_MAX;
        }

        // Complete overlapping condition
        if (lo >= l && hi <= r)
        {
            return seg[ind];
        }

        int mid = (lo + hi) / 2;

        int left = query(2*ind + 1, lo, mid, l, r);
        int right = query(2*ind + 2, mid + 1, hi, l, r);

        return min(left, right);
    }

    void update(int ind, int lo, int hi, int i, int val)
    {
        if (lo == hi) 
        {
            seg[ind] = val;
            return; // Base case should return here
        }

        int mid = (lo + hi) / 2;

        if (i <= mid)
        {
            update(2*ind + 1, lo, mid, i, val);
        }
        else
        {
            update(2*ind + 2, mid + 1, hi, i, val);
        }
        seg[ind] = min(seg[2*ind + 1], seg[2*ind + 2]);
    }
};
