#include<iostream>
using namespace std;
int main()
{
	float c,ans;
	while(1)
	{
		cin>>c;
		if(c==0)
		break;
		ans=2;
		while(c>0)
		c-=1/ans++;
		cout<<(int)ans-2<<" "<<"card(s)"<<endl;	
	}
	return 0;
} 
