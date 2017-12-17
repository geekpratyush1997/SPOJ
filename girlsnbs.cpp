#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	while(1)
	{
		double g,b;
		cin>>g>>b;
		if(g==-1 && b==-1)
		break;
		double k=g/(b+1);
		double j=b/(g+1);
		k=(j>k)?j:k;
		cout<<ceil(k)<<endl;
	}
	return 0;
}
