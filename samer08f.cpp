#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n,s=0;
		cin>>n;
		if(n==0)
		break;
		for(int i=1;i<=n;i++)
		s=s+i*i;
		cout<<s<<endl;
	}
	
	return 0;
}
