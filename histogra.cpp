#include<cstdio>
#include<stack>
typedef long long ll;
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
		break;
		int ar[n];
		for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
		stack<int> s;
		long long max_ar=0,tp,top_ar;
		int i=0;
		while(i<n)
		{
			if(s.empty() || ar[s.top()]<=ar[i])
			s.push(i++);
			else
			{
				tp=s.top();
				s.pop();
				top_ar=ar[tp]*(s.empty()?i:i-s.top()-1);
				if(top_ar>max_ar)
				max_ar=top_ar;
			}
		}
		while(!s.empty())
		{
			tp=s.top();
			s.pop();
			top_ar=ar[tp]*(s.empty()?i:i-s.top()-1);
			if(top_ar>max_ar)
			max_ar=top_ar;
		}
		printf("%lld\n",max_ar);
	}
}
