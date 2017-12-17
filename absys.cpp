#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	cin.get();
	while(t--)
	 {
		cout<<endl;
		getline(cin,s);
		int n=1,f=0,s1=0,s2=0,k=0;
		char ch;
		for(unsigned int i=0;i<s.length();i++)
		{
			ch=s[i];
			if(ch >='0' && ch <='9')
			{
				if(n==1)
				s1=10*s1+(ch-'0');
				if(n==2)
				s2=10*s2+(ch-'0');
			}
			else
			if(ch >='a' && ch <='m')
			{
				f++;
				if(n==1)
				{
					k=1;
					s1=0;
				}
				if(n==2)
				{
					k=2;
					s2=0;
					n--;
				}
				while(s[i]!=' ')
				i++;
			}
			else
			if(ch =='+')
			{
				if(!f)
				n++;
				i++;
			}
			else
			if(ch =='=')
			{
				if(!f)
				{
					k=3;
					break;
				}
				else
				{
					n++;
					i++;
				}	
			}
		}
		if(k==1)
		cout<<s2-s1<<" + "<<s1<<" = "<<s2<<endl;
		if(k==2)
		cout<<s1<<" + "<<s2-s1<<" = "<<s2<<endl;
		if(k==3)
		cout<<s1<<" + "<<s2<<" = "<<s1+s2<<endl;
	}
	return 0;
}
