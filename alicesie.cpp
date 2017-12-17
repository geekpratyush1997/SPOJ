#include<cstdio>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n,ans;
		scanf("%lld",&n);
		ans=(n+1)/2;
		printf("%lld\n",ans);
	}
	return 0;
}
