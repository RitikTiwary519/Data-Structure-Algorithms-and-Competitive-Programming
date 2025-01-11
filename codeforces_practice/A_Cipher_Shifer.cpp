#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        long long size;
        cin>>size;
        cin>>str;
        vector<char> vec;
        char chk;
        long long i=0;
        while(i<size)
        {
            vec.push_back(str[i]);
            chk=str[i];
            i++;
            if(chk==str[i])
            {
                i++;
            }
            else{
            while (chk!=str[i])
            {
                i++;
            }
            i++;
            }

        }
        for(auto it: vec)
        {
            cout<<it;
        }
        cout<<"\n";
        
    }
    
}