#include <bits/stdc++.h>
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int one,num;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            one=i;
        }
        else if(v[i]==n)
        {
            num=i;
        }
    }
    int mini= min(one,num);
    int maxi=max(one,num);

    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(i<mini)
        {
            ans.push_back(v[i]);
        }
        else if(i==mini)
        {
            ans.push_back(v[i]);
        }
        else if(i==maxi)
        {
            ans.push_back(v[i]);
        }
        else if(i>maxi)
        {
            ans.push_back(v[i]);
        }
        else
        {
            continue;
        }
    }

    cout<<ans.size()<<endl;
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    ritik_tiwary
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
