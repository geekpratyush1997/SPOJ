#include<cstdio>
#include<cmath>
#include<set>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i;
		float ans;
		set<float> st;
		scanf("%d",&n);
		m=n;
		while(m%2==0)
		{
			st.insert(2);
			m=m/2;
		}
		for(i=3;i<=sqrt(m);i++)
		{
			while(m%i==0)
			{
				st.insert(i);
				m=m/i;
			}
		}
		if(m>2)
		st.insert(m);
		ans=n;
		for(set<float>::iterator it=st.begin();it!=st.end();it++)
		{
			float k=((*it)-1)/(*it);
			ans=ans*k;
		}
		printf("%.0f\n",ans);
	}
	return 0;
}
