#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,id,f,i;
	set<int> s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>id>>f;
		s.insert(id);
		while(f--)
		{
			cin>>id;
			s.insert(id);
		}
	}
	cout<<s.size()-n<<endl;
	return 0;
}
