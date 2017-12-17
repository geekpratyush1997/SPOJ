#include <iostream>
using namespace std;
int main() 
{
    long long t;
    cin>>t;
    while (t--)
    {
    	long long int ans,n;
    	cin>>n;
    	ans=n*(n+1)+((n-1)*n/2);
    	cout<<ans%1000007<<endl;
    }
    return 0;
} 
