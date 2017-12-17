#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,post;
		cin>>s;
		stack<char> st;
		for(unsigned int i=0;i!=s.size();i++)
		{
			if(s[i]>='a' && s[i]<='z')
			post=post+s[i];
			else
			if(s[i]=='(')
			st.push(s[i]);
			else
			if(s[i]==')')
			{
				while(st.top()!='(')
				{
					post=post+st.top();
					st.pop();
				}
				st.pop();
			}
			else
			st.push(s[i]);
		}
		cout<<post<<endl;
	}
	return 0;
}
