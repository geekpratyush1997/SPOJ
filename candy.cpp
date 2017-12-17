#include<iostream>
#include<vector>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
		break;
		else
		{
			int s=0;
			vector<int> v;
			for(int i=1;i<=n;i++)
			{
				int c;
				cin>>c;
				v.push_back(c);
				s=s+c;				
			}
			if((s%n)!=0)
			cout<<"-1"<<endl;
			else
			{
				int k=s/n,g=0;
				vector<int>::iterator it;
				for(it=v.begin();it!=v.end();it++)
				{
					if(*it>k)
					g=g+(*it-k);
				}
				cout<<g<<endl;
			}
		}
	}
	return 0;
}
