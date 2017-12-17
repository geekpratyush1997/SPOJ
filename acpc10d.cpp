#include<iostream>
using namespace std;
int min2(int a,int b)
{
	return (a>b?b:a);
}
int min3(int a,int b,int c)
{
	return min2(a,min2(b,c));
}
int min4(int a,int b,int c,int d)
{
	return min2(a,min3(b,c,d));
}
int main()
{
	int n,count=1;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		int a[n][3],i;
		for(i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>a[i][2];
		a[0][2]+=a[0][1];
		a[1][0]+=a[0][1];
		a[1][1]+=min3(a[0][1],a[1][0],a[0][2]);
		a[1][2]+=min3(a[0][1],a[0][2],a[1][1]);
		for(i=2;i<n;i++)
		{
			a[i][0]+=min2(a[i-1][0],a[i-1][1]);
			a[i][1]+=min4(a[i-1][0],a[i-1][1],a[i-1][2],a[i][0]);
			a[i][2]+=min3(a[i-1][1],a[i-1][2],a[i][1]);
		}
		cout<<count<<". "<<a[n-1][1]<<endl;
		count++;
	}
	return 0;
}
