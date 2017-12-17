#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(1)
	{
		cin>>s;
		if(s[0]=='0')
		break;
		int v[5001];
		v[0]=1;
		v[1]=1;
		int i,l=s.length();
		for(i=2;i<=l;i++)
		{
			v[i]=0;
			int a=s[i-2]-'0';
			int b=s[i-1]-'0';
			if(a==1 ||(a==2 && b<=6))
			v[i]+=v[i-2];
			if(b!=0)
			v[i]+=v[i-1];
		}
		cout<<v[l]<<endl;
	}
	return 0;
}

