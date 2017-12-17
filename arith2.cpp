   //next time do it using the strings again and get ac again
    #include <iostream>
    using namespace std;
     
    int main() {
    	
    	int t,f;
    	long long int num1,num2,ans,count;
    	char opr;
    	cin>>t;
    	while (t--)
    {
    	cout <<endl;
    	f=1;
    	count=0;
    	while (f==1)
    	{
    		count++;
    		if (count==1)
    		cin>>num1;
    		else
    		num1=ans;
    		opr=' ';
    		while (opr==' ')
    		cin>>opr;
    		if (opr=='=')
    		{
    			cout <<ans <<endl;
    			f=0;
    		}
    		else
    		cin>>num2;
    		switch (opr)
    		{
    			case '+':ans=num1+num2;
    			         break;
    			case '-':ans=num1-num2;
    			         break;
    			case '*':ans=num1*num2;
    			         break;
    			case '/':ans=num1/num2;
    			         break;
    			default:break;
    		}         
    		
    	}
    }
    	return 0;
 } 
