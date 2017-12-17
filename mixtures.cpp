#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
int ar[110];
int hash[110][110];
int sum(int l,int u)
{
	int sum=0;
	for(int i=l;i<=u;i++)
	sum=(sum+ar[i])%100;
	return sum;
}
int calc(int l,int u)
{
	if(l==u)
	{
		hash[l][u]=0;
		return 0;
	}
	else
	if(hash[l][u]!=-1)
	return hash[l][u];
	else
	{
		int res=INT_MAX;
		for(int k=l;k<u;k++)
		{
			int temp=calc(l,k)+calc(k+1,u)+sum(l,k)*sum(k+1,u);
			res=min(res,temp);
		}
		hash[l][u]=res;
		return res;
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j;
		for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
		for(i=0;i<110;i++)
		{
			for(j=0;j<110;j++)
			hash[i][j]=-1;
		}
		int ans=calc(0,n-1);
		printf("%d\n",ans);
	}
	return 0;
}
