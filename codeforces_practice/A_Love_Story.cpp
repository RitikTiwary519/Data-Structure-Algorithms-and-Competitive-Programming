#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int ct=0;
        string cmp="codeforces";
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=cmp[i])
            {
                ct++;
            }
        }

        cout<<ct<<endl;
    }

    
}