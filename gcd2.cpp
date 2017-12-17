#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,i,carry,ans,t;
		char b[300];
		scanf("%d %s",&a,b);
		carry=0;
		if(a==0)
		{
			printf("%s\n",b);
			continue;
		}
		for(i=0;i<strlen(b);i++)
		{
			ans=(carry*10+(b[i]-'0'))%a;
			carry=(carry*10+(b[i]-'0'))%a;
		}
		while(ans!=0)
		{
			t=ans;
			ans=a%ans;
			a=t;
		}
		printf("%d\n",a);
	}
	return 0;
} 
