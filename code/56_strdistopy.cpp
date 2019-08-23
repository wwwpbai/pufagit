#include<iostream>
#include<string>
using namespace std;

bool distopy(string str1,string str2)
{
	int len1 =str1.size();
	int len2 = str2.size();
	if(len1!=len2)
		return false;
	len1 = len1&1 ? len1-1:len1;
	for(int i =0;i<len1;i++)
	{
		if((i&1)==0)
		{
			if(str1[i]!=str2[i+1])
			{
				return false;
			}
			else
			{
				continue;
			}
		}
		else
		{
			if(str1[i]!=str2[i-1])
			{
				return false;
			}
			else
			{
				continue;
			}
		}
		
	}
	return true;
}

int main()
{
	string str1 = "ab";
	string str2 = "ba";
	bool res = distopy(str1,str2);
	cout<<res<<endl;
}
