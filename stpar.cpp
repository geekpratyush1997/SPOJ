#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
	    stack<int> st;
	    int t,c=1;
	    while(n--)
		{
			cin>>t;
			if(t==c)
			c++;
			else 
			if(st.empty()==true)
			st.push(t);
			else
			{
				while(st.empty()==false && st.top()==c)
				{
					c++;
					st.pop();
				}
				st.push(t);
			}
		}
		while(st.empty()==false && st.top()==c)
		{
			st.pop();
			c++;
		}
		if(st.empty()==true)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;	
	}
	return 0;
}
