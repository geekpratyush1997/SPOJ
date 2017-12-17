#include<cstdio>
#include<cstring>
using namespace std;
#define MOD 1000000007
#define ull unsigned long long
void multiply(ull a[][2],ull b[][2])
{
	ull res[2][2];
	memset(res,0,sizeof(res));
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			res[i][j]=(res[i][j]+a[i][k]*b[k][j])%MOD;
		}
	}	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		a[i][j]=res[i][j];
	}
}
ull power(ull n)
{
	ull fib[2][2]={{1,1},{1,0}},temp[2][2]={{1,0},{0,1}};
	while(n)
	{
		if(n&1)
		multiply(temp,fib);
		multiply(fib,fib);
		n>>=1;
	}
	return temp[0][1];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ull l,r;
		scanf("%lld %lld",&l,&r);
		printf("%lld\n",(power(r+2)-power(l+1)+MOD)%MOD);
	}
	return 0;
}
