#include<iostream>
#include<string>
#include<vector>
using namespace std;

  string constructHuiwen(int len)
  {
	  string res;
	  int temp = len;
	  for (int i = 1; len > 0; len -= 2, i++)
	  {
		  res += to_string(i);
	  }
	  for (int i = temp/2; i >=1; i--)
	  {
		  res += to_string(i);
	  }
	  return res;
  }
int main()
{
	int len;
	cin>>len;
	string res = constructHuiwen(len);
	cout<<res<<endl;
	
	
}
