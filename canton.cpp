#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long n,diag,pos,end,den,num;
		cin>>n;
		diag=(int)ceil((sqrt(8*n+1)-1)/2);
		end=(diag*diag+diag)/2;
		pos=diag-(end-n);
		if(diag%2==0)
		{
			num=pos;
			den=diag+1-num;
		}
		else
		{
			den=pos;
			num=diag+1-den;
		}
		cout<<"TERM "<<n<<" IS "<<num<<"/"<<den<<endl;
	}
	return 0;
}
