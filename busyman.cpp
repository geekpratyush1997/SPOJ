#include<cstdio>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,str,fin,pre_fin,ans=1;
		scanf("%d",&n);
		vector <pair<int,int> > v;
		for(i=1;i<=n;i++)
		{
			scanf("%d%d",&str,&fin);
			v.push_back(make_pair(fin,str));
		}
		sort(v.begin(),v.end());
		pre_fin=v[0].first;
		for(i=1;i<n;i++)
		{
			if(v[i].second>=pre_fin)
			{
				ans++;
				pre_fin=v[i].first;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
