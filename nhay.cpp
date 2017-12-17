#include<cstdio>
#include<iostream>
#include<cstring>
#define max 1000006
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
llu arr[max],ah,bh[max];
int main()
{
	int i;
	arr[0]=1;
	for(i=1;i<=max;i++)
	arr[i]=arr[i-1]*10;
	string text,pat;
	int lenpat,lentext;
	while(cin>>lenpat>>pat>>text)
	{
		lentext=text.length();
		ah=0;
		memset(bh,0,sizeof(bh));
		for(i=lenpat-1;i>=0;i--)
		ah=ah*10+pat[i];
		for(i=lentext-1;i>=0;i--)
		bh[i]=bh[i+1]*10+text[i];
		bool flag=false;
		if(lenpat<=lentext)
		{
			for(i=0;i<=lentext-lenpat;i++)
			{
				llu c=bh[i]-(bh[i+lenpat]*arr[lenpat]);
				if(ah==c)
				{
					printf("%d\n",i);
					flag=true;
				}
			}
		}
		if(!flag)
		puts("");
	}
	return 0;
}
