#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		vector<int> s(4);
		cin>>a>>b;
		int d=a%10;
		if(b==0)
		cout<<"1"<<endl;
		else
		if(d==0 || d==1 || d==5 || d==6)
		{
			cout<<d<<endl;
		}
		else
		if(!(d%2))
		{
			s[0]=6,s[1]=2,s[2]=4,s[3]=8;
			cout<<s[(int)(b*log2(d))%4]<<endl;
		}
		else
		{
			s[0]=1,s[1]=3,s[2]=9,s[3]=7;
			if(!(d%3))
			cout<<s[b*(int)(log10(d)/log10(3))%4]<<endl;
			else
			if(b%4)
			cout<<s[4-b%4]<<endl;
			else
			cout<<s[0]<<endl;
		}
	}
	return 0;
}
