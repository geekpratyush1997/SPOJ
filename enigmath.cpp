#include<cstdio>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll a,b,g;
		scanf("%lld %lld",&a,&b);
		g=gcd(a,b);
		b=b/g,a=a/g;
		printf("%lld %lld\n",b,a);
	}
	return 0;
}
