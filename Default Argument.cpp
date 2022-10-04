#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
	int a=50,b=75,x;
	x=sum(a,b);
	cout<<"sum is="<<x<<endl;
	int c=80,y;
	y=sum(a,b,c);
	cout<<"sum is="<<y<<endl;
	return 0;
}
int sum(int p,int q,int r)
{
	return(p+q+r);
}
