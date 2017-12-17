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
string divison(string st)
{
	string div;
	int cr=0,i=0;
	for(;i<st.size();i++)
		{
			div+='0'+((cr+st[i]-'0')/2);
			cr=10*((st[i]-'0')%2);
		}
	for(i=0;i<div.size() && div[i]=='0';i++);
	div=div.substr(i,div.size()-i);
	if(div.size()==0)
	div="0";
	return div;
}
int main()
{
	string s,diff;
	for(int i=1;i<=10;i++)
	{
		cin>>s>>diff;
		cout<<divison(add(s,diff))<<endl<<divison(sub(s,diff))<<endl;
	}
	return 0;
}

