#include<vector>
#include<iostream>
using namespace std;

void outputnum(long int num)
{
	vector<long int> vec;
	long int remainder;
	while(num)
	{
		remainder =num%10;
		vec.push_back(remainder);
		num = num /10;
	}
	int len = vec.size();
	for(int i =len-1;i>=1;i--)
	{
		cout<<vec[i]<<"-";
	}
	cout<<vec[0];
}

int main()
{
	long int num;
	cin>>num;
	outputnum(num);
	
	
}
