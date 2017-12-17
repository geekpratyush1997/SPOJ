#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	while(1)
	{
		int l;
		cin>>l;
		if(l==0)
		break;
		float r=l/3.14;
		float ar=3.14*r*r/2;
		printf("%.2f",ar);
		cout<<endl;
	}
	return 0;
}
