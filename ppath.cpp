#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
bool prime[10000];
void seive()
{
	for(int i=2;i<=100;i++)
	{
		if(prime[i])
		for(int j=i*i;j<10000;j+=i)
		prime[j]=false;
	}
}
int conv(int a[])
{
	int temp=0,k=0;
	while(k<=3)
	{
		temp=temp*10+a[k];
		k++;
	}
	return temp;
}
void arr(int a[],int num)
{
	int k=3;
	while(num)
	{
		a[k--]=num%10;
		num/=10;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	memset(prime,true,sizeof(prime));
	seive();
	while(t--)
	{
		int a,b,dist[10009],parent[10009],digit[4];
		scanf("%d %d",&a,&b);
		memset(dist,-1,sizeof(dist));
		memset(parent,-1,sizeof(parent));
		queue <int> q;
		dist[a]=0;
		q.push(a);
		parent[a]=0;
		while(!q.empty())
		{
			int num=q.front();
			for(int k=3;k>=0;k--)
			{
				arr(digit,num);
				for(int i=0;i<=9;i++)
				{
					digit[k]=i;
					int temp=conv(digit);
					if(prime[temp] && dist[temp]==-1 && temp>=1000)
					{
						dist[temp]=dist[num]+1;
						parent[temp]=num;
						q.push(temp);
					}
				}
			}
			q.pop();
		}
		dist[b]==-1 ? printf("Impossible\n"):printf("%d\n",dist[b]);
	}
	return 0;
}
