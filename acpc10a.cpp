#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		break;
		else
		{
			int d=b-a;
			if((c-b)==d)
			{
				cout<<"AP"<<" ";
				cout<<c+d<<endl;
			}
			else
			{
				int r=b/a;
				cout<<"GP"<<" ";
				cout<<c*r<<endl;
			}
		}
	}
	return 0;
}
