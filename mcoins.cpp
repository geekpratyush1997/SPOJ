#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int k,l,m,i;
	cin>>k>>l>>m;
	int dp[1000001];
	dp[0]=dp[1]=0;
	for(i=2;i<1000001;i++)
	{
		int a=1,b=1,c=1;
		if(dp[i-1]==0)
		a=1;
		else
		a=0;
		if(i-k>0)
		{
			if(dp[i-k]==0)
			b=1;
			else
			b=0;
		}
		else
		if(i==k)
		b=0;
		if(i-l>0)
		{
			if(dp[i-l]==0)
			c=1;
			else
			c=0;
		}
		else
		if(i==l)
		c=0;
		if(a==0 || b==0 || c==0)
		dp[i]=0;
		else
		dp[i]=1;
	}
	while(m--)
	{
		int x;
		cin>>x;
		if(dp[x]==0)
		cout<<"A";
		else
		cout<<"B";
	}
	cout<<endl;
	return 0;
}
