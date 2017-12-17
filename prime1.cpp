#include<iostream>
#include<cmath>
#include<vector>
#include<set>
using namespace std;
int main()
{
	vector<int> prime;
	prime.push_back(2);
	int range=sqrt(1000000000);
	for(int i=3;i<=range;i++)
	{
		bool isprime=true;
		int cap=sqrt(i)+1;
		vector<int>::iterator p;
		for(p=prime.begin();p!=prime.end();p++)
		{
			if(*p>=cap)
			break;
			else
			if(i%*p==0)
			{
				isprime=false;
				break;
			}
		}
		if(isprime)
		prime.push_back(i);
	}
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(m<2)
		m=2;
		int cap=sqrt(n)+1;
		set<int> notprime;
		notprime.clear();
		vector<int>::iterator p;
		for(p=prime.begin();p!=prime.end();p++)
		{
			if(*p>=cap)
			break;
			int start;
			if(*p>=m)
			start=(*p)*2;
			else
			start=m+((*p-m%*p)%*p);
			for(int j=start;j<=n;j+=*p)
			notprime.insert(j);
		}
		for(int i=m;i<=n;i++)
		if(notprime.count(i)==0)
		cout<<i<<endl;	
	}
	return 0;
}
