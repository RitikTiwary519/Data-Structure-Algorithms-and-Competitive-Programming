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


int main()
{
    deque<int> q;
    q.emplace_back(1);
    q.emplace_back(2);
    q.emplace_back(3);
    q.emplace_back(4);
    q.pop_back();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}