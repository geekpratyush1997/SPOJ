#include<iostream>
#include<vector>
using namespace std;
vector<long long> v;
long long inv=0;
int merge(long long l,long long m,long long u)
{
	vector<long long> v1,v2;
	long long n1=m-l+1,n2=u-m,i,j,k;
	v1.resize(n1);
	v2.resize(n2);
	for(i=0;i<n1;i++)
	v1[i]=v[l+i];
	for(j=0;j<n2;j++)
	v2[j]=v[m+1+j];
	i=0,j=0;
	for(k=l;i<n1 && j<n2;k++)
	if(v1[i]<v2[j])
	v[k]=v1[i++];
	else
	{
		v[k]=v2[j++];
		inv=inv+(n1-i);
	}
	while(i<n1)
	v[k++]=v1[i++];
	while(j<n2)
	v[k++]=v2[j++];
	return 0;
}
int count(long long l,long long u)
{
	if(l<u)
	{
		long long m=l+(u-l)/2;
		count(l,m);
		count(m+1,u);
		merge(l,m,u);
	}
	return 0;
}
int main()
{
	long long t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
	    long long sz,i,k;
		cin>>sz;
		v.resize(sz);
		for(i=0;i<sz;i++)
		{
			cin>>k;
			v[i]=k;
		}
		
		count(0,sz-1);
		cout<<inv<<endl;
		cout<<endl;
		inv=0;
	}
	return 0;
}
