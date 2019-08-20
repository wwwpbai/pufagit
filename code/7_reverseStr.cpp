#include<iostream>
#include<string>
using namespace std;

void reverse(string & str,int begin,int end)
{
	while(begin<end)
	{
		char temp = str[begin];
		str[begin] =str[end];
		str[end] =temp;
		begin++;
		end--;
	}
}

int main()
{
	string res;
	cin>>res;
	cout<<res<<endl;
	reverse(res,0,res.size()-1);
	cout<<res<<endl;
}
