#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==(int)sqrt(n)*(int)sqrt(n))
	{
		cout<<"是完全平方数"<<endl;
	}
	else
	{
		cout<<"不是完全平方数"<<endl;
	}
}
