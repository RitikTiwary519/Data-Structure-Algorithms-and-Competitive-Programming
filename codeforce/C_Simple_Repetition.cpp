// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;

// const int N = 1e6 + 5;
// vector<bool> is_prime(N, true);

// void prime()
// {
//     is_prime[0] = false;
//     is_prime[1] = false;
//     for (int i = 2; i * i <= N; i++)
//     {
//         if (is_prime[i])
//         {
//             for (int j = i * i; j <= N; j += i)
//                 is_prime[j] = false;
//         }
//     }
//     is_prime[1]=1;
// }

// void solve()
// {
//     int a, b;
//     cin >> a >> b;

//     // Precomputed pattern numbers like 1, 101, 10101, 1010101...
//     vector<ll> mult = {1, 101, 101, 10101, 10101, 1010101, 1010101, 101010101, 101010101, 10101010101, 10101010101, 1010101010101, 1010101010101, 101010101010101, 101010101010101, 10101010101010101, 10101010101010101, 1010101010101010101, 1010101010101010101, 101010101010101010101, 101010101010101010101
//     };

//     ll multiplier;

//     if (b < mult.size())
//         multiplier = mult[b/2];
//     else
//     {
//         // If b is very large, it's safe to output NO directly because multiplier will exceed range.
//         no
//         return;
//     }
//     //cout<<multiplier<<" "<<a<<endl;
//     // if( (a==1 && is_prime[multiplier])||(is_prime[multiplier] && b<2))
//     // {
//     //     yes
//     // }
//     // else
//     // {
//     //     no
//     // }
//         for (int i = 0; i < mult.size(); i++)
//         {
//             if(is_prime[mult[i]])
//             {
//                 cout<<mult[i]<<endl;
//             }
//         }
        
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     prime();

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }


#include <iostream>
using namespace std;

// Function to check if n is prime
bool isPrime(long long n) {
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
       long long x;
       int k;
       cin >> x >> k;
       
       if((k == 1 && isPrime(x)) || (k==2 && x==1))
           cout << "YES" << "\n";
       else 
           cout << "NO" << "\n";
    }
    return 0;
}
