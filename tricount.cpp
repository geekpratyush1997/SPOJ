#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n,s=0;
		cin>>n;
		if(n%2==0)
		s=(n*(n+2)*(2*n+1))/8;
		else
		s=(n*(n+2)*(2*n+1)-1)/8;
		cout<<s<<endl;
	}
	return 0;
}

