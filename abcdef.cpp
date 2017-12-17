#include<cstdio>
#include<algorithm>
#include<vector>
#define MAX 101
using namespace std;
int a,b,arr[MAX],n;
long long ans=0LL;
vector<int> eq1,eq2;
int main()
{
	int i,j,k;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
            {
                eq1.push_back(arr[i]*arr[j]+arr[k]);
            }
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                if (arr[k]==0) 
                continue;
                eq2.push_back((arr[i]+arr[j])*arr[k]);
            }
        }
    }
	
	sort(eq1.begin(),eq1.end());
	sort(eq2.begin(),eq2.end());
	
	for(i=0;i<eq1.size();i++)
	{
		a=lower_bound(eq2.begin(),eq2.end(),eq1[i])-eq2.begin();
		b=upper_bound(eq2.begin(),eq2.end(),eq1[i])-eq2.begin();
		ans+=(b-a);
	}
	
	printf("%lld\n",ans);
	return 0;
}
