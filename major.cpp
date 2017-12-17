#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,f=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		
		for(i=0;i<(int)ceil(n/2.0);i++)
		{
			if(a[i]==a[i+(n/2)])
			{
				printf("YES %d\n",a[i]);
				f=1;
				break;
			}
		}
		if(f==0)
		printf("NO\n");
	}
	return 0;
}
