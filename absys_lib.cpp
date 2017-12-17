//atoi():to convert the string into int
//stdchr():to find the occurance of a character in a string
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int t,a,b,c;
	char str1[123],op1[2],str2[123],op2[2],str3[123];
	cin>>t;
	while(t--)
	{
		cout<<endl;
		cin>>str1>>op1>>str2>>op2>>str3;
		if((strchr(str1,'m'))!=NULL)
		{
			b=atoi(str2);
			c=atoi(str3);
			a=c-b;
		}
		else
		if((strchr(str2,'m'))!=NULL)
		{
			a=atoi(str1);
			c=atoi(str3);
			b=c-a;
		}
		else
		{
			a=atoi(str1);
			b=atoi(str2);
			c=a+b;
		}
		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	return 0;
}
