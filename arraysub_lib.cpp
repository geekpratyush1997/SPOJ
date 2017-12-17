#include<cstdio>
#include<vector>
#include<deque>
using namespace std;
typedef long long int lli;
lli arr[100002];
int main()
{
	lli n,i,k;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	scanf("%lld",&k);
	vector<lli> ans;
	deque<lli> q;
	for(i=0;i<k;i++)
	{
		while(!q.empty() && arr[i]>=arr[q.back()])
		q.pop_back();
		q.push_back(i);
	}
	for(i=k;i<n;i++)
	{
		ans.push_back(arr[q.front()]);
		while(!q.empty() && arr[i]>=arr[q.back()])
		q.pop_back();
		while(!q.empty() && q.front()<=(i-k))
		q.pop_front();
		q.push_back(i);
	}
	if(!q.empty())
	ans.push_back(arr[q.front()]);
	for(i=0;i<ans.size();i++)
	printf("%lld ",ans[i]);
	printf("\n");
	return 0;
}
