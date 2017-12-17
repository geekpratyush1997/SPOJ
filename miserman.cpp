#include<cstdio>
#include<climits>
using namespace std;
int n,m;
int arr[101][101];
int path[101][101];
int min2(int a,int b)
{
	return (a>b?b:a);
}
int ans(int x,int y)
{
	int l=INT_MAX,mid=INT_MAX,r=INT_MAX;
	if(path[x][y]==-1 && x<n && y<m)
	{
		if(y>0)
		l=ans(x+1,y-1);
		mid=ans(x+1,y);
		if(y<(m-1))
		r=ans(x+1,y+1);
		int min=min2(mid,min2(l,r));
		path[x][y]=arr[x][y]+min;
		return path[x][y];
	}
	else
	return path[x][y];
}
int main()
{
	int i,j,total,min=INT_MAX;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&arr[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		path[i][j]=-1;
	}
	for(i=0;i<m;i++)
	path[n-1][i]=arr[n-1][i];
	for(i=0;i<m;i++)
	{
		total=ans(0,i);
		
		if(total<min)
		min=total;
	}
	printf("%d\n",min);
	return 0;
}
