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
		int n,i;
		cin>>n;
		vector<int> vf,vm;
		for(i=1;i<=n;i++)
		{
			int f;
			cin>>f;
			vf.push_back(f);
		}
		for(i=1;i<=n;i++)
		{
			int m;
			cin>>m;
			vm.push_back(m);
		}
		sort(vf.begin(),vf.end());
		sort(vm.begin(),vm.end());
		vector<int>::iterator it1,it2;
		int max=0;
		for(it1=vf.begin(),it2=vm.begin();it1!=vf.end();it1++,it2++)
		{
			max=max+(*it1)*(*it2);
		}
		cout<<max<<endl;
	}
	return 0;
}
