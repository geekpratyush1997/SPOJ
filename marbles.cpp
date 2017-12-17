#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		n=n-k;
		if(n==0)
		{
			printf("1\n");
			continue;
		}
		double ar[n+1][k];
		int i,j;
		for(i=0;i<k;i++)
		ar[0][i]=1;
		for(j=0;j<=n;j++)
		ar[j][0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<k;j++)
			ar[i][j]=ar[i-1][j]+ar[i][j-1];
		}
		printf("%.0f\n",ar[n][k-1]);
	}
	return 0;
}
