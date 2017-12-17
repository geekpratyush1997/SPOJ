#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string c,s;
		int a[8]={0,0,0,0,0,0,0,0},i,n;
		cin>>n;
		cin>>c;
		for(i=0;i<c.size()-2;i++)
		{
			s=c.substr(i,3);
			if(s.compare("TTT")==0)
			a[0]++;
			else
			if(s.compare("TTH")==0)
			a[1]++;
			else
			if(s.compare("THT")==0)
			a[2]++;
			else
			if(s.compare("THH")==0)
			a[3]++;
			else
			if(s.compare("HTT")==0)
			a[4]++;
			else
			if(s.compare("HTH")==0)
			a[5]++;
			else
			if(s.compare("HHT")==0)
			a[6]++;
			else
			a[7]++;
		}
		cout<<n<<" ";
		for(i=0;i<7;i++)
		cout<<a[i]<<" ";
		cout<<a[i]<<endl;
	}
	return 0;
}
