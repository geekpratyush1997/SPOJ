#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
vector<list<int> > adj;
vector<char> c;
int f=0;
void dfs(int u,int p)
{
	c[u-1]='G';
	for(list<int>::iterator it=adj[u-1].begin();it!=adj[u-1].end();it++)
	{
		if(c[*it-1]=='W')
		dfs(*it,u);
		else
		if(c[*it-1]=='G' && *it!=p)
		{
			cout<<"NO"<<endl;
			exit(1);
		}
	}
	c[u-1]='B';
}
int main()
{
	int n,m,i,v,u;
	cin>>n>>m;
	if(m!=n-1)
	f=1;
	c.resize(n);
	adj.resize(n);
	for(i=0;i<m;i++)
	{
		cin>>v>>u;
		adj[v-1].push_back(u);
		adj[u-1].push_back(v);
	}
	fill(c.begin(),c.end(),'W');
	if(f==0)
	dfs(1,0);
	for(i=2;i<=n;i++)
	if(c[i-1]=='W')
	{
		f=1;
		break;
	}
	if(f==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
