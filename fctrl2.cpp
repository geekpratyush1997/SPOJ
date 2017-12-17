#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int carry=0,t;
		vector<int> k;
		k.push_back(1);
		for(int i=1;i<=n;i++)
		{
			vector<int>::iterator p;
			for(p=k.begin();p!=k.end();p++)
			{
				t=(*p)*i+carry;
				*p=t%10;
				carry=t/10;
			}
			while(carry>0)
			{
				k.push_back(carry%10);
				carry=carry/10;
			}
		}
		vector<int>::iterator p;
		for(p=k.end()-1;p!=k.begin()-1;p--)
		cout<<*p;
		cout<<endl;
	}
	return 0;
}
