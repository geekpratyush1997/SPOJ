#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,t2;
	cin>>n;
	t2=n;
	while(n--)
	{
		long bor,fr,st,ans=0,im=0;
		vector<int> t;
		cin>>bor>>fr;
		while(fr--)
		{
			cin>>st;
			t.push_back(st);
		}
		sort(t.begin(),t.end());
		vector<int>::reverse_iterator it;
		for(it=t.rbegin();it!=t.rend();it++)
		{
			bor-=*it;
			ans++;
			if(bor<=0)
			{
				im++;
				break;
			}
		}
		cout<<"Scenario #"<<t2-n<<":"<<endl;
		if(im)
		cout<<ans<<endl;
		else
		cout<<"impossible"<<endl;
		cout<<endl;
	}
	return 0;
}
