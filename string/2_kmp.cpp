#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


//longest common preffix to suffix , we store it in an array

vector<int> kmp(string s)
{
    int n =s.size();
    vector<int> lps(n,0);
    
    for(int i=1;i<n;i++)
    {
        int prev_ind = lps[i-1];
        while(prev_ind>0 && s[i]!=s[prev_ind])
        {
            prev_ind = lps[prev_ind-1];
        }
        lps[i]= prev_ind +(s[i]==s[prev_ind] ? 1 : 0);
    }
    return lps;

}