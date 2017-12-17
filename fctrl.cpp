#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s=0,m=1;
		while(pow(5,m)<=n)
		{
			s=s+n/pow(5,m);
			m++;
		}
		cout<<s<<endl;
	}
	return 0;
}


