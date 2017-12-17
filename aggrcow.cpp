#include<iostream>
//Implementation of abstract binary search
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int n,c;
vector<int> v(100001);
bool f(int x)
{
	int d=v[0],cow=1,i;
	for(i=0;i<n;i++)
	{
		if(v[i]-d>=x)
		{
			cow++;
			if(cow==c)
			return true;
			d=v[i];
		}
	}
	return false;
}
int bin_ser()
{
	int p=0,q=v[n-1];
	while(p<q)
	{	
		int x=(p+q)/2;
		if(f(x))
		p=x+1;
		else
		q=x;
	}
	return (p-1);
}
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&c);
		for(i=0;i<n;i++)
		scanf("%d",&v[i]);
		sort(v.begin(),v.begin()+n);
		printf("%d\n",bin_ser());
	}
	return 0;
}
