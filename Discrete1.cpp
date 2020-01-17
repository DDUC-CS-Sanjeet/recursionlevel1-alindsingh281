#include<iostream>
using namespace std;

int gcdrecur(int, int);
int gcd(int, int);
int fact();
int factrecur(int);
int power(float, float);
int powerrecur(int, int);
int fibonacci();
int fibonaccirecur(int);

int num=0,k=0,l=1,n=0,f,a,b,m,n1,n2,n3;
float pow=0,number=0;
int main()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	if(a==0||b==0)
		cout<<"0";
	else
		cout<<"Without recursion"<<gcd(a,b)<<"\nWith recursion"<<gcdrecur(a,b);
		
	fact();
	
	cout<<"Enter a positive number: ";
	cin>>num;
	if(num<0)
		cout<<"invalid!!!";
	else
		f=factrecur(num);
	cout<<f;
	
	cout<<"Enter NUMBER and its POWER respectively: ";
	cin>>number>>pow;
	power(number,pow);
	powerrecur(number,pow);
	
	int fibonacci();
	
	
	cout<<"Enter no. of terms to be printed: ";
	cin>>m;
	cout<<"Fibonacci: 0 1 "<<fibonaccirecur(n-2);
		
	return 0;
}

int gcdrecur(int x, int y)
{   
	if(x<0||y<0)
		cout<<"invalid";
	if(y==0)
		return x;
	
	 return gcd(y,x%y);
}

int gcd(int x, int y)
{
	int temp=0;
	 while(y!=0)
	 {
	 	temp=x;
	 	x=y;
	 	y=temp%y;
	 }
	 cout<<x;
	return x;
}

int fact()
{
	int num=0,fact=1;
	cout<<"Enter a positive number: ";
	cin>>num;
	if(num==0)
		fact=1;
	else if(num<0)
		return -1;
	else
		for(int i=num; i!=0; i--)
		{
			fact*=i;
		}
	cout<<fact;	
}

int factrecur(int n)
{
	if(n==0)
		return (1);
	return(n*factrecur(n-1));
}

int power(float a,float b)
{	float result=1;
	for(int i=b;i!=0;i--)
	    {
		result*=number;
		}
	cout<<"\n"<<result;
}

int powerrecur(int a,int b)
{
	if (b==0)
		return(1);
	return(a * power(a,b-1));
}

int fibonacci()
{
int a=0,b=1,num=0;
cout<<"Enter no. of Fibonacci Numbers to be printed: ";
cin>>num;
cout<<"\n"<<a<<" "<<b<<" ";
 for(int i=2;i<num;i++)
	{   
		a=a+b;
		cout<<a<<" ";
			
	}
	return 0;
}

int fibonaccirecur(int n)
{
	if(n<=0)
	{
		cout<<"Invalid";
		return 0;
	}
	else
	{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	cout<<n3<<" ";
	
	return fibonaccirecur(n-1);
	}
}
