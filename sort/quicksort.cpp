#include <bits/stdc++.h>
using namespace std;
#define ll long long

//so listen quicksort code is very clever code specially that masala in paritiotn

int partition(vector<int> &nums,int lo,int hi)
{
    
    int i=lo-1; //this will point to the last element that will be smaller than pivot;
    int part=nums[hi];
    for (int j = lo; j < hi; j++)
    {
        if(nums[j]<part)
        {
            i++;
            swap(nums[i],nums[j]);  //so this will make sure that element i , will be point will be the smaller than pivot and to the most right to it
        }
    }
    swap(nums[i+1],nums[hi]);  //placed the pivot element at right position
    return i+1;
    
    
}

void quicksort(vector<int> &nums,int lo,int hi)
{
    if(lo<hi)
    {
    int pi=partition(nums,lo,hi);
    quicksort(nums,lo,pi-1);
    quicksort(nums,pi+1,hi);
    }
    
    return ;

}


int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    quicksort(nums,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<endl;
    }
    
    

}