#include<iostream>
#include<string>
using namespace std;

bool AllisNum(string str)
{
	for(int i =0;i<str.size();i++)
	{
		int temp = int(str[i]);
		if(temp>=48 && temp <=57)
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string str1="baiwenpeng";
	string str2 = "19941209";
	if(AllisNum(str2))
	{
		cout<<"全是数字"<<endl;
	}
	else
	{
		cout<<"不全是数字"<<endl;
	}
		
}
