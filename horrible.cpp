#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long sum[4*100000],childsum[4*100000];
long long query(int node,int l,int r,int a,int b)
{
	if(a>r || b<l)
	return 0;
	long long ret=(min(b,r)-max(a,l)+1)*sum[node];
	if(a<=l && b>=r)
	ret+=childsum[node];
	else
	{
		int mi=(l+r)>>1;
		ret+=query(2*node+1,l,mi,a,b)+query(2*node+2,mi+1,r,a,b);
	}
	return ret;
}
void update(int node,int l,int r,int a,int b,int x)
{
	if(a>r || b<l)
	return;
	if(a<=l && b>=r)
	sum[node]+=x;
	else
	{
		int mi=(l+r)>>1;
		update(2*node+1,l,mi,a,b,x);
		update(2*node+2,mi+1,r,a,b,x);
		childsum[node]=childsum[2*node+1]+childsum[2*node+2]+(mi-l+1)*sum[2*node+1]+(r-mi)*sum[2*node+2];
	}
}
int main()
{
	int tc,c,p,q,v,n,op;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&n,&c);
		memset(sum,0,sizeof(sum));
		memset(childsum,0,sizeof(childsum));
		for(int i=0;i<c;i++)
		{
			scanf("%d",&op);
			if(op==0)
			{
				scanf("%d %d %d",&p,&q,&v);
				update(0,1,n,p,q,v);
			}
			else
			{
				scanf("%d %d",&p,&q);
				printf("%lld\n",query(0,1,n,p,q));
			}
		}
	}
	return 0; 
}
