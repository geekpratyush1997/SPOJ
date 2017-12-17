#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long k,l,m,n,d,a;
		cin>>k>>l>>m;
		n=(2*m)/(k+l);
		cout<<n<<endl;
		d=(k-l)/(5-n);
		a=k-2*d;
		for(int i=1;i<n;i++)
		cout<<a+(i-1)*d<<" ";
		cout<<a+(n-1)*d<<endl;
	}
	return 0;
}
