
#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		unsigned int n,s=0;
		cin>>n;
		for (unsigned int i=1;i<=n;i++)
		{
			unsigned long long h;
			cin>>h;
			s=s+h%n;
		}
	(s%n==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
    return 0;
} 
