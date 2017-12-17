#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
#define N 1000005
char str[N];
int rank[N],pos[N];
int cnt[N],next[N];
bool bh[N],b2h[N];
bool smaller_first_char(int a,int b)
{
	return str[a]<str[b];
}
void suffixSort(int n)
{
	for(int i=0;i<n;i++)
	pos[i]=i;
	sort(pos,pos+n,smaller_first_char);
	for(int i=0;i<n;i++)
	{
		bh[i]=i==0 || str[pos[i]]!=str[pos[i-1]];
		b2h[i]=false;
	}
	for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
	for(int h=1;h<n;h<<=1)
	{
		int buckets=0;
		for(int i=0,j;i<n;i=j)
		{
			j=i+1;
			while(j<n && !bh[j])
			j++;
			next[i]=j;
			buckets++;
		}
		for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
		if(buckets==n)
		break;
		for(int i=0;i<n;i=next[i])
		{
			cnt[i]=0;
			for(int j=i;j<next[i];++j)
			rank[pos[j]]=i;
		}
		cnt[rank[n-h]]++;
		b2h[rank[n-h]]=true;
		for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i=next[i])
		{
			for(int j=i;j<next[i];j++)
			{
				int s=pos[j]-h;
				if(s>=0)
				{
					int head=rank[s];
					rank[s]=head+cnt[head]++;
					b2h[rank[s]]=true;
				}
			}
			for(int j=i;j<next[i];++j)
			{
				int s=pos[j]-h;
				if(s>=0 && b2h[rank[s]])
				{
					for(int k=rank[s]+1;!bh[k] && b2h[k];k++)
					b2h[k]=false;
				}
			}
		}
		for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			pos[rank[i]]=i;
			bh[i] |= b2h[i];
		}
		for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	rank[pos[i]]=i;
	for(int i=0;i<n;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<bh[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
}
int height[N];
void getHeight(int n)
{
	for(int i=0;i<n;i++)
	rank[pos[i]]=i;
	height[0]=0;
	for(int i=0,h=0;i<n;i++)
	{
		if(rank[i]>0)
		{
			int j=pos[rank[i]-1];
			while(i+h<n && j+h<n && str[i+h]==str[j+h])
			h++;
			height[rank[i]]=h;
			if(h>0)
			h--;
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		long long len=0LL+strlen(str);
		long long total=len*(len+1)/2;
		suffixSort(len);
		getHeight(len);
		for(int i=0;i<len;i++)
		cout<<rank[i]<<" ";
		cout<<endl;
		for(int i=0;i<len;i++)
		cout<<pos[i]<<" ";
		cout<<endl;
		for(int i=0;i<len;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;
		for(int i=0;i<len;i++)
		cout<<next[i]<<" ";
		cout<<endl;
		for(int i=0;i<len;i++)
		cout<<bh[i]<<" ";
		cout<<endl;for(int i=0;i<len;i++)
		cout<<b2h[i]<<" ";
		cout<<endl;
		for(int i=0;i<len;i++)
		total-=height[i];
		cout<<total<<endl;
	}
	return 0;
}
