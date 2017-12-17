#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j,diff=INT_MAX;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		cin>>m;
		ll b[m];
		for(j=0;j<m;j++)
		cin>>b[j];
		sort(a,a+n);
		sort(b,b+m);
		for(i=0,j=0;i<n && j<m;)
		{
			if(a[i]==b[j])
			{
				diff=0;
				break;
			}
			else
			if(a[i]>b[j])
			{
				if(a[i]-b[j]<diff)
				diff=a[i]-b[j];
				j++;
			}
			else
			{
				if(b[j]-a[i]<diff)
				diff=b[j]-a[i];
				i++;
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}
