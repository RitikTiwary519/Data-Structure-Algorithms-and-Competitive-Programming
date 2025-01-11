#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char qn='?';
    int x=0,y=0;
    while (t--)
    {
        char mat[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>mat[i][j];
                if(qn==mat[i][j])
                {
                    x=i;
                    y=j;
                }
            }
            
        }
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=(mat[i][y]-'A');
        }
        cout<<char('A'+(3-sum)-2)<<endl;
        

        
    }
    
}