#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		int ans=(int)floor(log2(n));
		printf("%d\n",ans);
	}
	return 0;
}
