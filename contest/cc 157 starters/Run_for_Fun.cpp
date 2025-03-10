#include <bits/stdc++.h>
using namespace std;

int main() {
	double x,y;
	cin>>x>>y;
    if(x>=y)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ceil(y/x)-1<<endl;
    }
}
