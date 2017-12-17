#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,d,i,f=0;;
		cin>>n>>m>>d;
		int heal[n];
		for(i=0;i<n;i++)
		cin>>heal[i];
		sort(heal,heal+n);
		for(i=n-1;i>=0 && m>0;i--)
		{
			if(heal[i]<=d)
			{
				cout<<"NO"<<endl;
				f=1;
				break;
			}
			while(heal[i]>d)
			{
				heal[i]=heal[i]-d;
				m--;
			}
		}
		if(f==0)
		cout<<"YES"<<endl;
	}
	return 0;
}

