#include<iostream>
#include<vector>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(!n)
		break;
		else
		{
			unsigned int f=0,k,i;
			vector<unsigned int> v;
			while(n--)
			{
				cin>>k;
				v.push_back(k);
			}
			vector <unsigned int>::iterator it;
			for(i=1,it=v.begin();it!=v.end();i++,it++)
			if(v[*it-1]!=i)
			{
				f++;
				break;
			}
			if(f)
			cout<<"not ambiguous"<<endl;
			else
			cout<<"ambiguous"<<endl;
		}
	}
	return 0;
}
