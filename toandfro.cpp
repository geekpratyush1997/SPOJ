#include<iostream>
#include<string>
using namespace std;
int main()
{
	while(1)
	{
		unsigned int col;
		cin>>col;
		if(col==0)
		break;
		else
		{
			string s,st;
			unsigned int i=1,j=1,k;
			cin>>s;
			unsigned int len=s.length(),row=len/col;
			for(k=0;k<len;k++)
			{
				if(i%2)
				{
					st[row*(j-1)+(i-1)]=s[k];
					if(j==col)
					i++;
					else
					j++;
				}
				else
				{
					st[row*(j-1)+(i-1)]=s[k];
					if(j==1)
					i++;
					else
					j--;
				}
			}
			for(unsigned int l=0;l<len;l++)
			cout<<st[l];
			cout<<endl;
		}
		
	}
	return 0;
}
