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

void solve()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    int z=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }

        int mini = n/2- min(o,z);
        int maxi= o/2+z/2;

        

        if(k>=mini && k<=maxi && mini%2==k%2)
        {
            yes
        }
        else
        {
            no
        }


}

    
    


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    
}
