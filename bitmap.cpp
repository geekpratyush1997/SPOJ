#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
int posx[4]={0,-1,0,1};
int posy[4]={-1,0,1,0};
int n,m;
queue< pair<int,int> > s;
bool validpos(int a,int b)
{
	return ((a<n && a>=0) && (b<m && b>=0))?true:false;
}
int bfs(vector< vector<int> > *graph,vector< vector <int> > *visited)
{
	while(s.empty()==false)
	{
		pair<int,int> top=s.front();
		s.pop();
		for(int i=0;i<4;i++)
		{
			int newx=top.first+posx[i];
			int newy=top.second+posy[i];
			if(validpos(newx,newy))
			if(visited->at(top.first)[top.second]+1<visited->at(newx)[newy])
			{
				visited->at(newx)[newy]=visited->at(top.first)[top.second]+1;
				pair<int,int> node (newx,newy);
				s.push(node);
			}
			
		}
	}
}
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int i,j;
		scanf("%d %d",&n,&m);
		vector< vector<int> > graph;
		vector<int> ceros(m);
		vector< vector<int> > visited(n,ceros);
		string line;
		for(i=0;i<n;i++)
		{
			vector<int> temp;
			cin>>line;
			for(j=0;j<m;j++)
			{
				int brw=line[j]-'0';
				visited[i][j]=1<<30;
				if(brw==1)
				{
					pair<int,int> start(i,j);
					s.push(start);
					visited[i][j]=0;
				}
				temp.push_back(brw);
			}   
			graph.push_back(temp);                                                          
		}
		bfs(&graph,&visited);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(graph[i][j]==0)
				{
					int result=visited[i][j];
					(j+1<m)?printf("%d ",result):printf("%d",result);
				}
				else
				(j+1<m)?printf("0 "):printf("0");
			}
			printf("\n");
		}
	}
	return 0;
}
