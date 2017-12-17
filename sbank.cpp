#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
string str[100002];
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int i,n,b;
		cin>>n;
		for(i=0;i<=n;i++)
		getline(cin,str[i]);
		sort(str+1,str+n+1);
		b=1;
		for(i=1;i<=n;i++)
		{
			if(str[i]==str[i+1])
			b++;
			else
			{
				cout<<str[i]<<" "<<b<<endl;
				b=1;
			}
		}
	}
	return 0;
}
