#include<cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int f,e,n,p[512],w[512],dp[10000];
		scanf("%d %d %d",&e,&f,&n);
		f-=e;
		for(int i=0;i<n;i++)
		scanf("%d %d",&p[i],&w[i]);
		dp[0]=0;
		for(int i=1;i<=f;i++)
		{
			dp[i]=-1;
			for(int j=0;j<n;j++)
			if(i>=w[j] && dp[i-w[j]]!=-1 && (dp[i]==-1 || p[j]+dp[i-w[j]]<=dp[i]))
			dp[i]=p[j]+dp[i-w[j]];
		}
		if(dp[f]==-1)
		printf("This is impossible.\n");
		else
		printf("The minimum amount of money in the piggy-bank is %d.\n",dp[f]);
	}
	return 0;
}
