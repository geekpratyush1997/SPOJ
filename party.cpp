#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,w;
	scanf("%d %d",&w,&n);
	while(w && n)
	{
		int fun[n],cost[n];
		for(int i=0;i<n;i++)
		scanf("%d %d",&cost[i],&fun[i]);
		int ks[n+1][w+1];
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(i==0 || j==0)
				ks[i][j]=0;
				else
				if(cost[i-1]<=j)
				ks[i][j]=max(ks[i-1][j],ks[i-1][j-cost[i-1]]+fun[i-1]);
				else
				ks[i][j]=ks[i-1][j];
			}
		}
		int ans=-1;
		for(int i=1;i<=w;i++)
		{
			if(ks[n][i]==ks[n][w])
			{
				ans=i;
				break;
			}
		}
		printf("%d %d\n",ans,ks[n][w]);
		scanf("%d %d",&w,&n);
	}
	return 0;
}
