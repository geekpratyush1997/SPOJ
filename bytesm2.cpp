#include<iostream>
using namespace std;
int ar[101][101];
long long total[101][101];
int col;
int row;
int recur(int h,int w)
{
	int l=0,m=0,r=0;
	if(total[h][w]==-1 && h<row && w<col)
	{
		if(w>0)
		l=recur(h+1,w-1);
		m=recur(h+1,w);
		if(w<(col-1))
		r=recur(h+1,w+1);
		int max=(l>m)?((l>r)?l:r):((m>r)?m:r);
		total[h][w]=ar[h][w]+max;
		return total[h][w];
	}
	else
	return total[h][w];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,w,i,j,tot,mx=0;
		cin>>h>>w;
		col=w;
		row=h;
		for(i=0;i<h;i++)
		for(j=0;j<w;j++)
		cin>>ar[i][j];
		for(i=0;i<h;i++)
		for(j=0;j<w;j++)
		total[i][j]=-1;
		for(i=0;i<w;i++)
		total[h-1][i]=ar[h-1][i];
		for(i=0;i<w;i++)
		{	
			tot=recur(0,i);
			if(tot>mx)
			mx=tot;
		}
		cout<<mx<<endl;
	}
	return 0;
}
