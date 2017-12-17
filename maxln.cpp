#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long long r;
		cin>>r;
		double ans=4*r*r+0.25;
		cout<<"Case "<<i<<": ";
		printf("%.2f\n",ans);
	}
	return 0;
}
