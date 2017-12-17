#include<cstdio>
using namespace std;
typedef long long int ll;
int main()
{
	ll arm,h,a,b,ts,t;
	scanf("%lld",&ts);
	while(ts--)
	{
		scanf("%lld %lld",&a,&b);
		if(a==0 || b==0)
		printf("0\n");
		else
		{
			t=1;
			h=a+3;
			arm=b+2;
			while(1)
			{
				if(h>5 && arm>10)
				{
					h-=2;
					arm-=8;
					t+=2;
				}
				else
				if(h>20 && arm<=10)
				{
					h-=17;
					arm+=7;
					t+=2;
				}
				else
				printf("%lld\n",t);
			}
		}
	}
	return 0;
}
