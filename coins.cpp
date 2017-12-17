#include<iostream>
#include<map>
#define max(a,b) (a>b)?a:b
using namespace std;
map<unsigned long,unsigned long> mp;
unsigned long byte(unsigned long n)
{
	if(n==0)
	return 0;
	if(mp[n]>0)
	return mp[n];
	else
	{
		unsigned long c;
		c=max(n,byte(n/2)+byte(n/3)+byte(n/4));
		mp[n]=c;
		return mp[n];
	}
}
int main()
{
	unsigned int n;
	while(cin>>n)
	cout<<byte(n)<<endl;
	return 0;
}
