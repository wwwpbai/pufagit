#include<iostream>
#include<vector>
#include<string>
using namespace std;

int NumOfSum(string str)
{
	if(str.size()==0)
		return 0;
	int sum = 0;
	for(int i =0;i<str.size();i++)
	{
		int temp = (int)str[i];
		if(temp>=48 && temp<=57)
		{
			sum += temp-48;
		}
	}
	return sum;
}

int main()
{
	string str = "hello1209";
	int res = NumOfSum(str);
	cout<<"�ַ����е�����֮��"<<res<<endl;
	
}
