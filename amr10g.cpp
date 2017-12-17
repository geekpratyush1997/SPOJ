#include<cstdio>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int k,n,i,min=INT_MAX;
		scanf("%lld %lld",&n,&k);
		long long int h[n];
		for(i=0;i<n;i++)
		scanf("%lld",&h[i]);
		sort(h,h+n);
		for(i=0;i<n-k+1;i++)
		if((h[i+k-1]-h[i])<=min)
		min=h[i+k-1]-h[i];
		printf("%lld\n",min);
	}
	return 0;
}
