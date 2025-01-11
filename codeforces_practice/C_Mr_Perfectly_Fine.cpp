#include <bits/stdc++.h>
using namespace std;

int min(int &t,int &q)
{
    if(t<=q)
    {
        return t;
    }
    else{
        return q;
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        cin>>size;
        vector<pair<int,string>> vec(size);
        int Ming=2000;
        int min1=2000;
        int min2=2000;
        for (int i = 0; i < size; i++)
        {
            int q;
            string w;
            cin>>q;
            cin>>w;
            vec.push_back(make_pair(q,w));
            if(vec[i].second[0]=='1' && vec[i].second[1]=='1')
            {
                Ming=min(Ming,vec[i].first);
            }

            else if(vec[i].second[0]=='0' && vec[i].second[1]=='1')
            {
                min2=min(min2,vec[i].first);
            }
            else if(vec[i].second[0]=='1' && vec[i].second[1]=='0')
            {
                min1=min(min1,vec[i].first);
            }
        }

        cout<<min1<<"\n"<<min2<<"\n"<<Ming<<endl;
        if(Ming<=(min1+min2))
        {
            cout<<Ming<<endl;
        }
        else{
            cout<<min1+min2<<endl;
        }


            
    }
    
}