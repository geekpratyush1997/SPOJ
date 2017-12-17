#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll bin_ser(ll a[],ll l,ll r,ll ser)
{
	ll mid=(ll)(l+r)/2;
	if(l<=r)
	{
		if(a[mid]==ser)
		return mid;
		else
		if(ser<a[mid])
		return bin_ser(a,l,mid-1,ser);
		else
		if(ser>a[mid])
		return bin_ser(a,mid+1,r,ser);
	}
	return -1;
}
int main()
{
	while(1)
	{
		ll n1,n2,i;
		cin>>n1;
		if(n1==0)
		break;
		ll tsum=0,sa[n1],a[n1],sum=0;
		for(i=0;i<n1;i++)
		{
			cin>>a[i];
			tsum+=a[i];
			sa[i]=tsum;
		}
		tsum=0;
		cin>>n2;
		ll sb[n2],b[n2];
		for(i=0;i<n2;i++)
		{
			cin>>b[i];
			tsum+=b[i];
			sb[i]=tsum;
		}
		ll pre1=0,pre2=0,f=0,ch1=0,ch2=0,pos=-1;
		for(i=0;i<n1;i++)
		{
			pos=bin_ser(b,0,n2-1,a[i]);
			if(pos==-1)
			continue;
			if(pos>=0)
			{
				if(f==0)
				{
					ch1=sa[i];
					ch2=sb[pos];
					f++;
				}
				else
				{
					ch1=sa[i]-sa[pre1];
					ch2=sb[pos]-sb[pre2];
				}
				pre1=i,pre2=pos;
				sum+=max(ch1,ch2);
			}
		}
		if(f>=1)
		{
			ch1=sa[n1-1]-sa[pre1];
			ch2=sb[n2-1]-sb[pre2];
		}
		else
		{
			ch1=sa[n1-1];
			ch2=sb[n2-1];
		}
		sum+=max(ch1,ch2);
		cout<<sum<<endl;
	}
	return 0;
}
