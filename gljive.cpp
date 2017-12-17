#include<iostream>
using namespace std;
int main()
{
	int i,sumr=0,sum=0,a,f=1;
	for(i=1;i<=10;i++)
	{
		cin>>a;
		sumr+=a;
		if(sumr>=100)
		{
			if((sumr-100)<=(100-sum))
			sum=sumr;
			f=0;
		}
		if(f)
		sum=sumr;
	}
	cout<<sum<<endl;
}
