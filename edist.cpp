#include<cstring>
#include<cstdio>
using namespace std;
int a[2001][2001];
int min(int a, int b, int c)
{
	return (c>((a>b)?b:a))?((a>b)?b:a):c;
}
int main()
{
	int i,j,n,m,t;
	char x[2001],y[2001];
	for(scanf("%d",&t);t;t--)
	{
		scanf("%s%s",x,y);
		n=strlen(x);
		m=strlen(y);
		a[0][0]=0;
		for(i=1;i<=n;i++)
		a[i][0]=a[i-1][0]+1;
		for(j=1;j<=m;j++)
		a[0][j]=a[0][j-1]+1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			a[i][j]=min(a[i-1][j]+1,a[i][j-1]+1,a[i-1][j-1]+((x[i-1]==y[j-1])?0:1));
		}
		printf("%d\n",a[n][m]);
	}
	return 0;
}
