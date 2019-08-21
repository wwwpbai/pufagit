#include<iostream>
using namespace std;

int oneCount(int num)
{
	int count = 0;
	while(num)
	{
		if(num&1)
		{
			count++;
		}
		num =num>>1;
	}
	return count;
}

int main()
{
	int num = 0b00110010;
	int res = oneCount(num);
	cout<<res<<endl;
}
