#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long n,i;
	scanf("%d",&n);
	long long v;
	cin>>v;
	i=v;
	n--;
	while(n--)
	{	
		cin>>v;
		i=i^v;
	}
	printf("%d\n",i);
}
