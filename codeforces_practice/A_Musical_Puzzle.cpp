#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int q;
        cin>>q;
        set<string> st;
        string str;
        cin>>str;
        for (int i = 0; i <= str.size()-2; i++)
        {
            string val=str.substr(i,2);
            //cout<<val<<endl;
            st.insert(val);  
        }
        cout<<st.size()<<endl;
        

    }
    
}
























// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         vector<char> vec;
//         int size,k;
//         cin>>size;
//         k=size;
//         while (k--)
//         {
//             char ch;
//             cin>>ch;
//             vec.push_back(ch);
//         }


//         char fl=vec[0];
//         int ct=0;

//         for(int j=1;j<size;j++)
//         {
//             while (j<size)
//             {
//                 if(vec[j]==fl)
//                 {
//                     j++;
//                     ct++;
//                     fl=vec[j];
//                     break;
//                 }
//                 if(j==size-1)
//                 {
//                     ct=size-1;
                    
//                 }
//                 j++;
//             }
            
//         }
//         cout<<ct<<endl;
        
        

        
//     }
    
// }