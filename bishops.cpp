#include<iostream>
#include<algorithm>
using namespace std;
string add(string s1,string s2)
{
	string ans;
	if(s1.size()<s2.size())
	swap(s1,s2);
	int i,carry=0;
	for(i=0;i<s2.size();i++)
	{
		ans+='0'+(carry+(s1[s1.size()-i-1]-'0')+(s2[s2.size()-i-1]-'0'))%10;
		carry=(carry+(s1[s1.size()-i-1]-'0')+(s2[s2.size()-i-1]-'0'))/10;
	}
	for(;i<s1.size();i++)
	{
		ans+='0'+(carry+s1[s1.size()-i-1]-'0')%10;
		carry=(carry+s1[s1.size()-i-1]-'0')/10;
	}
	if(carry!=0)
	ans+='0'+carry;
	reverse(ans.begin(),ans.end());
	return ans;
}
string sub(string s1,string s2)
{
	string ans;
	int i,carry=0;
	for(i=0;i<s2.size();i++)
	{
		if(s1[s1.size()-i-1]-s2[s2.size()-i-1]-carry>=0)
		{
			ans+='0'+(s1[s1.size()-i-1]-s2[s2.size()-i-1]-carry);
			carry=0;
		}
		else
		{
			ans+='0'+(s1[s1.size()-i-1]-s2[s2.size()-i-1]-carry+10);
			carry=1;
		}
	}
	for(;i<s1.size();i++)
	{
		if(s1[s1.size()-i-1]-carry>='0')
		{
			ans+=s1[s1.size()-i-1]-carry;
			carry=0;
		}
		else
		{
			ans+=s1[s1.size()-i-1]-carry+10;
			carry=1;
		}
	}
	reverse(ans.begin(),ans.end());
	for(i=0;i<ans.size() && ans[i]=='0';i++);
	ans=ans.substr(i,ans.size()-i);
	if(ans.size()==0)
	ans="0";
	return ans;
}
int main()
{
	string str;
	while(cin>>str)
	{
		if(str.compare("1")==0)
		cout<<"1"<<endl;
		else
		cout<<sub(add(str,str),"2")<<endl;
	}
	return 0;
}
