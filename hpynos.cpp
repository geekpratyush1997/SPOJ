#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	vector<long long> v;
    int i=0;
	cin>>n;
	long long sq=0,d;
	while(1)
	{
		i++;
		while(n>0)
		{
			d=n%10;
			n=n/10;
			sq=sq+d*d;
		}
		if(sq==1)
		{
			cout<<i<<endl;
			break;
		}
		else
		if(find(v.begin(),v.end(),sq)!=v.end())
		{
			cout<<"-1"<<endl;
			break;
		}
		else
		{
			v.push_back(sq);
			n=sq;
			sq=0;
		}
	}
	return 0;
}
