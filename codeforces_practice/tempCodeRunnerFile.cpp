 forn(i,0,4)
        {
            if(i<=1)
            marea=max((v[i][v[i][0]-1]-v[i][1])*height,marea);
            else{
            marea=max((v[i][v[i][0]-1]-v[i][1])*base,marea);    
            }

        }
        cout<<marea<<endl;