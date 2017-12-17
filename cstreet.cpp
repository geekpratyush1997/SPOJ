#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
#define pii pair< int ,int >
#define pip pair<int , pii >
#define ll long long
#define MAX 10001
vector<pip> Graph;
int parent[MAX];
int findset(int x)
{
	if(parent[x]!=x)
	parent[x]=findset(parent[x]);
	return parent[x]; 
}
int main()
{
	int i,t,N,E,u,v,w;
	ll price,total;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%d%d",&price,&N,&E);
		for(i=1;i<=N;i++)
		parent[i]=i;
		Graph.resize(E);
		for(i=0;i<E;i++)
		{
			scanf("%d%d%d",&u,&v,&w);
			Graph[i]=pip(w,pii(u,v));
		}
		sort(Graph.begin(),Graph.end());
		for(total=i=0;i<E;i++)
		{
			u=findset(Graph[i].second.first);
			v=findset(Graph[i].second.second);
			if(u!=v)
			{
				total+=(ll)Graph[i].first;
				parent[u]=parent[v];
			}
		}
		printf("%lld\n",total*price);
	}
	return 0;
}


