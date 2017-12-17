#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int lcs[6101][6101];
int LCS(string a,string b)
{
	int i,j;
	for(i=0;i<=a.length();i++)
	{
		for(j=0;j<=b.length();j++)
		{
			if(i==0 || j==0)
			lcs[i][j]=0;
			else
			if(a[i-1]==b[j-1])
			lcs[i][j]=lcs[i-1][j-1]+1;
			else
			lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	return lcs[a.length()][b.length()];
}
int main()
{
	int t;
	string s,r;
	scanf("%d",&t);
	getline(cin,s);
	while(t--)
	{
		getline(cin,s);
		r=s;
		for(int i=0,j=r.size()-1; i<j;++i,--j)
   		{
  			char temp=r[i];
  			r[i]=r[j];
  			r[j]=temp;
  		}	
		printf("%d\n",s.length()-LCS(s,r));
	}
	return 0;
}
