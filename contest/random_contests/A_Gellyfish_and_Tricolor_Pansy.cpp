#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "Gellyfish" << endl;
#define no cout << "Flower" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// void solve()
// {
//     int a,b,ka,kb;
//     cin>>a>>b>>ka>>kb;

//     if(b==1 || kb==1)
//     {
//         yes
//         return;
//     }
//     else if(a==1 || ka==1)
//     {
//         no
//         return;
//     }

//     if(ka>kb)
//     {
//         if(a<kb)
//         {
//             no
//             return;
//         }
//         else
//         {
//             yes
//             return;
//         }
//     }
//     else if(kb>ka)
//     {
//         if(b<ka)
//         {
//             yes
//             return;
//         }
//         else
//         {
//             no
//             return;
//         }
//     }
//     else
//     {
//         if(ka<b && kb<a)
//         {
//             if(a<b)
//             {
//                 no
//             }
//             else if(b>a)
//             {
//                 yes
//             }
//             else
//             {
//                 if(ka%2==1)
//                 {
//                     yes
//                     return;
//                 }
//                 else
//                 {
//                     no
//                     return ;
//                 }

//             }

//         }
//         if(a<b)
//         {
//             no
//             return;
//         }
//         else
//         {
//             yes
//             return;
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
// }




int main() {


    int t;
    cin >> t;
    while(t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll flower = 2LL * b - 1; 
        
        ll FlowerKnight = 2LL * d - 1;

        
        ll killGellyPlayer = 2LL * a; 
        ll killGellyKnight = 2LL * c;

        ll G_event = min(flower, FlowerKnight);
        ll F_event = min(killGellyPlayer, killGellyKnight);

        if (G_event < F_event) {
            cout << "Gellyfish\n";
        } else {
            cout << "Flower\n";
        }
    }
    return 0;
}
