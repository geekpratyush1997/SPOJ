#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,d;
	while(1)
	{
		cin>>a>>d;
		if(!(a && d))
		break;
		int ap[a],dp[d];
		for(int i=0;i<a;i++)
		{
			cin>>ap[i];
		}
		for(int i=0;i<d;i++)
		{
			cin>>dp[i];
		}
		sort(ap,ap+a);
		sort(dp,dp+d);
		if(ap[0] >= dp[1])
		cout<<"N"<<endl;
		else
		if(ap[0] == dp[0] && ap[0] ==dp[1])
		cout<<"N"<<endl;
		else
		cout<<"Y"<<endl;	
	}
	return 0;
}
