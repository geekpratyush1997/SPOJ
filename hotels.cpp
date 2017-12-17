#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,k,ans=0,sum=0;
	cin>>n>>m;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	vector<int>::iterator rt=v.begin(),lt=v.begin();
	while(1)
	{
		while(rt!=v.end() && sum+*rt<=m)
		{
			sum+=(*rt);
			rt++;
		}
		ans=max(ans,sum);
		if(rt==v.end())
		break;
		sum+=(*rt);
		rt++;
		while(lt!=v.end() && sum>m)
		{
			sum-=(*lt);
			lt++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
