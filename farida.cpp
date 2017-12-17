#include<cstdio>
#define max(a,b) (a>b)?a:b; 
using namespace std;
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		long long int n,i,j,c,max=0;
		scanf("%lld",&n);
		long long int cn[n];
		for(i=0;i<n;i++)
		scanf("%lld",&cn[i]);
		for(i=1;i<n;i++)
		{
			c=cn[i];
			for(j=0;j<i-1;j++)
			cn[i]=max(cn[i],c+cn[j]);
		}
		for(i=0;i<n;i++)
		if(cn[i]>max)
		max=cn[i];
		printf("Case %d: %lld\n",k,max);
	}
	return 0;
}
