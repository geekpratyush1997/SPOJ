#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n;
	while(1)
	{
		cin>>n;
		if(n==-1)
		break;
		double x=(1+sqrt(1+4*(n-1)/3.0))/2.0;
		if(floor(x)==x)
		cout<<"Y"<<endl;
		else
		cout<<"N"<<endl;
	}
	return 0;
}

