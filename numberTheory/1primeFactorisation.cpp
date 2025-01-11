#include <bits/stdc++.h>
using namespace std;

vector<int> factorisation;

void factor(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0)
        {
            factorisation.push_back(i);
        }
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    factor(n);

    for(auto it: factorisation)
    {
        cout<<it<<endl;
    }
    
    
}