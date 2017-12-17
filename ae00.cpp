#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    	int n;
    	cin>>n;
    	int total=0;
    	for (int i=1;i<=n;i++)
    	{ int sq=sqrt(i);
    		for (int j=2;j<=sq;j++)
    		{
    			if (i%j==0)
    			total=total+1;
    		}
    		total=total+1;
    	}
    	cout<<total<<endl;
        return 0;
} 
