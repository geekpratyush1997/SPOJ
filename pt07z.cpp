#include<iostream>
#include<cstdio>
#include<vector>
#include<list>
#include<algorithm>
#include<climits>
using namespace std;
vector<char> c;
vector<list<int> > v;
int ans;
int dfs(int u)
{
	int ls=0,ls2=0;
    int temp=INT_MIN;	
    c[u-1]='G';
    for(list<int>::iterator it=v[u-1].begin();it!=v[u-1].end();it++)
    {
    	if(c[*it-1]=='W')
    	{
    		temp=dfs(*it);
    		if(temp>=ls)
    		{
    			ls2=ls;
    			ls=temp;
    		}
    		else
    		if(temp>ls2)
    		ls2=temp;
    		}
    }
	ans=(ans>(ls+ls2))?ans:(ls+ls2);
    c[u-1]='B';
    return ls+1;
}
int main()
{
	int nd,m,n,i;
    scanf("%d",&nd);
    v.resize(nd);
    c.resize(nd);
    for(i=0;i<nd-1;i++)
    {
    	scanf("%d%d",&m,&n);
    	v[m-1].push_back(n);
    	v[n-1].push_back(m);
    }
    fill(c.begin(),c.end(),'W');
    dfs(1);
    printf("%d\n",ans);
    return 0;
}
