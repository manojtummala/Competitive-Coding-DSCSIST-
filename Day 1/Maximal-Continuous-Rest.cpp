#include<bits/stdc++.h>
 
using namespace std;
int a[500000];
 
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			a[i+n] = a[i];
		}
		int cnt = 0,maxm = 0;
		for (int i=0;i<2*n-1;i++)
		{
			if (a[i]==1)
			{
				cnt++;
				maxm = max(cnt,maxm);
			}
			else
			{
				cnt = 0;
			}
		}
		printf("%d\n",maxm);
	}
	return 0;
}
