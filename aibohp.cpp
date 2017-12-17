#include<iostream>
using namespace std;
int main()
{
	string s;
	int c[6100][6101],i,t,n,l;
	cin>>t;
	for(i=0;i<6100;i++)
	c[i][1]=0;
	while(t--)
	{
		cin>>s;
		n=s.size();
		for(i=0;i<n-1;i++)
		if(s[i]==s[i+1])
		c[i][2]=0;
		else
		c[i][2]=1;
		for(l=3;l<=n;l++)
		{
			for(i=0;i<n-l+1;i++)
			if(s[i]==s[i+l-1])
			c[i][l]=c[i+1][l-2];
			else
			c[i][l]=min(c[i+1][l-1],c[i][l-1])+1;
		}
		cout<<c[0][n]<<endl;
	}
	return 0;
}
