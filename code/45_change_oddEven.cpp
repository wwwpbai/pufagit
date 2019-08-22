#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	vector<string> str;
	cin >>n;
	for(int i= 0;i<n;i++)
	{
		string temp;
		cin>>temp;
		str.push_back(temp);
	}
	for(int i =0;i<str.size();i++)
	{
		for(int j =0;j<str[i].size();j+=2)
		{
			char ctemp = str[i][j];
			str[i][j]=str[i][j+1];
			str[i][j+1] = ctemp;
		}
	}
	for(int i = 0;i<str.size();i++)
	{
		cout<<str[i]<<endl;
	}
	
}
