#include<iostream>
using namespace std;

int getCommonMeasure(int a,int b)
{
	int z= b;
	while(a%b!=0)
	{
		z = a%b;
		a= b;
		b =z;
	}
	return z;
	
}


int main()
{
	int a, b;
	cin >>a>>b;
	int res = getCommonMeasure(a,b);
	cout<<res<<endl;
	
}
