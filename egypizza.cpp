#include<cstdio>
#include<cstring>
#define min(a,b) (a>b)?b:a;
using namespace std;
int main()
{
	int nm,c1=0,c2=0,c3=0;
	char str[4];
	scanf("%d",&nm);
	while(nm--)
	{
		scanf("%s",str);
		if(strcmp(str,"1/2")==0)
		c1++;
		else
		if(strcmp(str,"1/4")==0)
		c2++;
		else
		c3++;
	}
	int n=1,d=0;
	d=min(c2,c3);
	n+=d;
	c2-=d;
	c3-=d;
	n+=c1/2;
	c1=c1%2;
	if(c1==1 && c2>=2)
	{
		n+=1;
		c1=0;
		c2-=2;
	}
	if(c1==1 && c2==1)
	{
		n+=1;
		c1=0;
		c2=0;
	}
	d=min(c2/4,c1);
	n+=d;
	c1-=d;
	c2-=(2*d);
	n+=c2/4;
	if(c2%4==0)
	c2=0;
	else
	c2=1;
	n+=(c1+c2+c3);
	printf("%d\n",n);
	return 0;
}
