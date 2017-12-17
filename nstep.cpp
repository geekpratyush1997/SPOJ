#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		
		if(!((x+y)%2) && (x==y || y==x-2))
		{
			int ans;
			if(!(y%2))
			ans=x+y;
			else
			ans=x+y-1;
			cout<<ans<<endl;
		}
		else
		cout<<"No Number"<<endl;
	}
	return 0;
}
