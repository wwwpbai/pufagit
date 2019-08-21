#include<iostream>
#include<map>
#include<string>
using namespace std;

char getFirstchar(string str)
{
	map<char,int>mp;
	char c;
	for(int i=0;i<str.size();i++)
	{
		mp[str[i]]++;
	}
	for(int i =0;i<str.size();i++)
	{
		if(mp[str[i]]==1)
		{
			c = str[i];	
			break;
		}
			
			
	}
	return c;
}
int main()
{
	string str ="abcabdec";
	char res = getFirstchar(str);
	cout<<"第一次出现一次的字符是"<<res<<endl; 
} 
