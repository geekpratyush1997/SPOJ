#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string str;
	char ch;
	while(cin>>str)
	{
		string s;
		int i,f=0,err=0;
		if(!islower(str[0]))
		err=3;
		else
		s=s+str[0];
		if(err!=3)
		for(i=1;i<str.size();i++)
		{
			if(islower(str[i]))
			s=s+str[i];	
			else
			if(str[i]=='_' && err==0)
			{
				i++;
				f=1;
				if(i==str.size())
				{
					err=3;
					break;
				}
				if(!islower(str[i]))
				{
					err=3;
					break;
				}
				ch=toupper(str[i]);
				s=s+ch;
			}
			else
			if(str[i]=='_' && err==2)
			{
				err=3;
				break;
			}
			else
			if(isupper(str[i]) && (err==0 || err==2) && f==0)
			{
				s=s+'_';
				ch=tolower(str[i]);
				s=s+ch;
				err=2;
			}
			else
			{
				err=3;
				break;
			}
		}
		if(err==3)
		cout<<"Error!"<<endl;
		else
		cout<<s<<endl;
	}
	return 0;
}
