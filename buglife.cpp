#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int bfs(vector<int> graph[],int n)
{
	bool visited[n+1];
	int colour[n+1];
	int nod,flag=0;
	memset(visited,0,sizeof(visited));
	memset(colour,-1,sizeof(colour));
	for(int k=1;k<=n;k++)
	{
		if(!visited[k])
		{
			queue <int> q;
			q.push(k);
			colour[k]=1;
			while(!q.empty())
			{
				nod=q.front();
				q.pop();
				visited[nod]=1;
				for(unsigned int i=0;i<graph[nod].size();i++)
				{
					if(colour[graph[nod][i]]==-1)
					colour[graph[nod][i]]=!colour[nod];
					else
					if(colour[graph[nod][i]]==colour[nod])
					{
						flag=1;
						break;
					}
					if(!visited[graph[nod][i]])
					q.push(graph[nod][i]);
				}
				if(flag)
				break;
			}
		}
		if(flag)
		break;
	}
	return flag;
}
int main()
{
	int cc=0,t,n,m,i,u,v;
	scanf("%d",&t);
	while(t--)
	{
		cc++;
		scanf("%d %d",&n,&m);
		vector<int> graph[n+1];
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&u,&v);
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		printf("Scenario #%d:\n",cc);
		if(bfs(graph,n))
		printf("Suspicious bugs found!\n");
		else
		printf("No suspicious bugs found!\n");
	}
	return 0;
}
