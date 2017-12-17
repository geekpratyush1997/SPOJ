#include<cstdio>
#include<algorithm>
using namespace std;
struct req{
	int l,r,val,idx;
	bool t;
};
bool operator <(req a,req b)
{
	if(a.r==b.r)
	return a.t < b.t;
	return a.r < b.r;
}
int bit[30001];
void add(int y,int val)
{
	while(y<=30000)
	{
		bit[y]+=val;
		y+=(y & -y);
	}
}
int sum(int y)
{
	int res=0;
	while(y>0)
	{
		res+=bit[y];
		y-=(y & -y);
	}
	return res;
}
int main()
{
	int n,q,i;
	bool visited[1000001];
	int *prev=new int[1000001];
	for(i=0;i<=1000000;i++)
	{
		visited[i]=false;
		prev[i]=0;
	}
	req array[230000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		add(i,1);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i].val);
		array[i].idx=i+1;
		array[i].t=0;
		array[i].r=i+1;
	}
	scanf("%d",&q);
	for(i=n;i<n+q;i++)
	{
		scanf("%d %d",&array[i].l,&array[i].r);
		array[i].idx=i-n;
		array[i].t=1;
	}
	sort(array,array+n+q);
	int ans[q];
	for(i=0;i<n+q;i++)
	{
		if(array[i].t)
		{
			ans[array[i].idx]=sum(array[i].r)-sum(array[i].l-1);
		}
		else
		{
			if(visited[array[i].val])
			{
				if(prev[array[i].val]!=0)
				add(prev[array[i].val],-1);
			}
			visited[array[i].val]=true;
			prev[array[i].val]=array[i].idx;
		}
	}
	for(i=0;i<q;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
