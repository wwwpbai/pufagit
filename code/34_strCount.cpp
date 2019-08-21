#include<iostream>
#include<string>
using namespace std;

void stringCount(string str,int &numCount,int &strCount,int &spaceCount,int &otherCount)
{
	if(str.size()==0)
		return ;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			numCount++;
		}
		else if(str[i]==' ')
		{
			spaceCount++;
		}
		else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
		{
			strCount++;
		}
		else
		{
			otherCount++;
		}
	}
	
}
int main()
{
	string str = "123sdfdf  %^&()";
	int numCount = 0;
	int strCount = 0;
	int spaceCount = 0;
	int otherCount = 0;
	stringCount(str,numCount,strCount,spaceCount,otherCount);
	cout<<"数字个数"<<numCount<<endl;
	cout<<"字符个数"<<strCount<<endl;
	cout<<"空格个数"<<spaceCount<<endl;
	cout<<"其他个数"<<otherCount<<endl;
	
	
}
