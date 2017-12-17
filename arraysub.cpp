#include<cstdio>
using namespace std;
typedef long long int lli;
lli arr[100002];
int main()
{
	lli n,i,k,j,max;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	scanf("%lld",&k);
	for(i=0;i<k;i++)
	{
		max=arr[i];
		for(j=i+1;j<i+k;j++)
		if(arr[j]>max)
		max=arr[j];
		printf("%lld",max);
	}
	printf("\n");
	return 0;
}
