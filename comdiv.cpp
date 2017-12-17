#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int t,gd,a,b;
	scanf("%d",&t);
	while(t--)
	{
		int c=0,i;
		scanf("%d %d",&a,&b);
		if(a==0 || b==0)
		{
			printf("%d\n",c);
			continue;
		}
		gd=__gcd(a,b);
		for(i=1;i*i<=gd;i++)
		{
			if(gd%i==0)
			c=c+2;
		}
		i-=1;
		if(i*i==gd)
		c--;
		printf("%d\n",c);
	}
	return 0;
}
