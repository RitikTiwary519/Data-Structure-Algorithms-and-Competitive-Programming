// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         cout<<round(sqrt(n))<<endl;
//     }
    
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXN 105
int sign[MAXN];
int main()
{
	int count, count1 = 0;
	scanf("%d", &count);
	while (count--)
	{
		int n;
		scanf("%d", &n);
		if (n >= 5 && n <= 100)
		{
			memset(sign, -1, sizeof(sign));
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if (j%i == 0)
						sign[j] *= (-1);
				}
			}
			for (int i = 1; i <= n; i++)
			{
				if (sign[i] == 1)
				{
					count1++;
				}
			}
			printf("%d\n", count1);
			count1 = 0;
		}
		else
			exit(0);
	}
}
