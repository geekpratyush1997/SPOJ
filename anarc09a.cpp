#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[2001];
	int count=0;
	while(scanf("%s",str))
	{
		count++;
		if(str[0]=='-')
		break;
		int i,j=0,ans=0;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='{')
			j++;
			else
			{
				if(str[i]=='}' && j==0)
				{
					ans++;
					j++;
				}
				else
				j--;
			}
		}
		ans+=j/2;
		printf("%d. %d\n",count,ans);
	}
	return 0;
}
