#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

bool solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    // Check each '1' in the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 1)
            {
                int can_remove = 2;

                for (int k = i - 1; k >= 0; k--)
                {
                    if (v[k][j] == 0)
                    {
                        can_remove--;
                        break;
                    }
            
                }

                for (int l = j - 1; l >= 0; l--)
                {
                    if (v[i][l] == 0)
                    {
                        can_remove--;
                        break;
                    }
            
                }
                if(can_remove==0)
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            yes
        }
        else
        {
            no
        }
    }
}
