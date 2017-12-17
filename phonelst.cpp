#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		int n;
		cin>>n;
		vector<string> v;
		for(int i=0;i<n;i++)
		{
			string x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		string prev="asdh";
		for(int i=0;i<v.size() && flag==0;i++)
		{
			int len=prev.length();
			string cp=v.at(i).substr(0,len);
			if(cp==prev)
			{
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
			prev=v.at(i);
		}
		if(flag==0)
		cout<<"YES"<<endl;
	}
	return 0;
}
