#include <bits/stdc++.h>
using namespace std;
#define el endl;
void printbinary(int n)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
// int main()
// {
    
//         int a=100;
//         printbinary(100);
        
//         //checking 4th bit
//         cout<<("checking the 2th position where 0 is at positon 1 ")<<el;
//         cout<<((a>>2)&1)<<el

//         //changing the position to 1
        
//         cout<<"changing 1nd bit to 1"<<el
//         printbinary((a | (1<<1)));

//         //changing the position to 0
//         cout<<"changing the 2nd bit to 0"<<el
//         printbinary(a&(~(1<<2)));

//         //toggling the position of bit
//         cout<<"changing the bit from 0 to 1 and vice-versa "<<el
//         printbinary(a ^ (1<<9));

//         //similarly we can do printing of 4th msb and 6th lsb
  
// }

int main()
{
    int a=10;
    int b=3;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout<<a<<el
    cout<<b<<el

}