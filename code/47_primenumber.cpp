#include<iostream>
#include<cmath>
using namespace std;

bool IsPirmeNumber(int n)
{
	for(int i = 2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	bool res = IsPirmeNumber(n);
	cout<<res<<endl;
}
