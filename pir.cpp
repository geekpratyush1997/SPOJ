#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int t;
	double x,y,z,X,Y,Z;
	long double vol;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z>>Z>>Y>>X;
		vol=sqrt(4*x*x*y*y*z*z-x*x*pow((long double)(y*y+z*z-X*X),2)-y*y*pow((long double)(x*x+z*z-Y*Y),2)-z*z*pow((long double)(y*y+x*x-Z*Z),2)+(y*y+z*z-X*X)*(x*x+z*z-Y*Y)*(y*y+x*x-Z*Z))/12;
		printf("%.4Lf\n",vol);
	}
	return 0;
}
