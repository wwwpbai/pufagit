#include<iostream>
using namespace std;

int getNum(int n)
{
	int m=0;
	for(int i=1;i<=n;i++)
	{
		m = m*10+i;
		
	}
	for(int j=n-1;j>0;j--)
	{
		m= m*10+j;
	}
	cout<<m<<endl;
	return m;
}


int main()
{
	int n;
	cin>>n;
	int sum =0;
	for(int i=1;i<=n;i++)
	{
		sum += getNum(i);
	}
	cout<<sum<<endl;
	
	
	
}
