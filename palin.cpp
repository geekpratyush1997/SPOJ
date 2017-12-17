#include<iostream>
#include<algorithm>
using namespace std;
string addone(string s)
{
	int carry=1,i;
	for(i=(s.size()-1)/2;i>=0;i--)
	{
		char ch=s[i];
		s[i]='0'+(s[i]-'0'+carry)%10;
		carry=(ch-'0'+carry)/10;
	}
	if(carry!=0)
	{
		string str="";
		str+='0'+carry;
		s=str+s;
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		int i;
		cin>>s;
		s1=s.substr(0,s.size()/2);
		reverse(s1.begin(),s1.end());
		if(s1.compare(s.substr((s.size()+1)/2,s.size()/2))<=0)
		s=addone(s);
		for(i=0;i<s.size()/2;i++)
		cout<<s[i];
		if(s.size()%2==1)
		cout<<s[s.size()/2];
		for(i=s.size()/2-1;i>=0;i--)
		cout<<s[i];
		cout<<endl;
	}
	return 0;
}

