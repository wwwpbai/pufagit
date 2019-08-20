#include<string>
#include<stack>
#include<iostream>
using namespace std;

bool HuiWenStr(string str)
{
	if(str.size()==0)
	{
		return true;
	}
	stack<char> s;
	for(int i =0;i<str.size();i++)
	{
		s.push(str[i]);
	}
	for(int i =0;i<str.size();i++)
	{
		if(str[i]==s.top())
		{
			s.pop();
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
	string str = "123213";
	if(HuiWenStr(str))
	{
		cout<<"是回文串"<<endl;
	}
	else
	{
		cout<<"不是回文串"<<endl;
	}
	
	
}
