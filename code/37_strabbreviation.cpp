#include<string>
#include<iostream>
using namespace std;

string strAbbreviation(string str)
{
	int index =0;
	string res ;
	int left =0,right=0;
	int len = str.size();
	while(right<len)
	{
		if(right+1<len && str[right+1]-str[right]==1)
		{
			right++;
		}
		else
		{
			if(right-left+1>=4)
			{
				res+=str[left];
				res+=str[right];
			}
			else
			{
				res+=str.substr(left,right-left+1);
			}
			right++;
			left=right;
		}
	}
	return res;
}

int main()
{
	string str="XYABCDEH";
	string res = strAbbreviation(str);
	cout<<res<<endl;
	
}
