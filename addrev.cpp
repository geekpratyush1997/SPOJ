#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{	
		int d=0,s=0,ans=0,a,b;
		cin>>a>>b;
		while(a>0)
		{
			d=a%10;
			a=a/10;
			s=s*10+d;
		}
		ans=ans+s;
		s=0,d=0;
		while(b>0)
		{
			d=b%10;
			b=b/10;
			s=s*10+d;
		}
		ans=ans+s;
		s=0,d=0;
		while(ans>0)
		{
			d=ans%10;
			ans=ans/10;
			s=s*10+d;
		}
		cout<<s<<endl;
	}
	return 0;
}
