#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int b,ar[4],d,c,l,i;
		string a;
		cin>>a>>b;
		d=a[a.size()-1]-'0';
		if(b==0)
		{
			cout<<"1"<<endl;
			continue;
		}
		c=d%10;
		for(i=0;i<4;i++)
		{
			ar[i]=c;
			c=(c*d)%10;
		}
		l=b%4;
		if(l==0)
		l=4;
		cout<<ar[--l]<<endl;
	}
	return 0;
}
