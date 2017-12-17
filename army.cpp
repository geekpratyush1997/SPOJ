#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		int ng,nm,k;
		cin>>ng>>nm;
		vector<int> g,m;
		for(int i=1;i<=ng;i++)
		{
			cin>>k;
			g.push_back(k);
		}
		for(int j=1;j<=nm;j++)
		{
			cin>>k;
			m.push_back(k);
		}
		sort(g.begin(),g.end());
		sort(m.begin(),m.end());
		vector<int>::iterator ig,im;
		for(ig=g.begin(),im=m.begin();ig!=g.end() && im!=m.end();)
		{
			if(*ig>=*im)
			{
				im++;
				nm--;
			}
			else
			{
				ig++;
				ng--;
			}
		}
		if(nm==0)
		cout<<"Godzilla"<<endl;
		else
		cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
