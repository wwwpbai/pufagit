#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool IsIpAddress(string str)
  {
	  if (str.size() == 0)
		  return false;
	  //�Ƿ�ֻ�������ֺ͵� 
	  for (int i = 0; i < str.size(); i++)
	  {
		  if ((str[i] < 48 || str[i]>57) && (str[i] != '.'))
		  {
			  return false;
		  }
	  }
	  //�Ƿ���ϵ��ʮ���Ƶĸ�ʽ 
	  int count = 0;
	  for (int i = 0; str[i + 1] != '\0'; i++)
	  {
		  if ((str[i] >= 48 && str[i]<=57) && str[i + 1] == '.')
		  {
			  count++;
		  }
	  }
	  if (count != 3)
	  {
		  return false;
	  }
	  //�������ķ�Χ�Ƿ�Ϸ�
	  int temp = 0;
	  int j = 0;
	  for (int i = 0; i < str.size(); i++)
	  {
		  if (str[i] != '.')
		  {
			  temp = temp * 10 + int(str[i] - '0');

		  }
		  else
		  {
			  if (temp <= 255)
			  {
				  temp = 0;
			  }
			  else
			  {
				  return false;
			  }
		  }
	  }
	  if (temp > 255)
		  return false;

	  return true;
}
int main()
{
	string str;
	cin>>str;
	bool res = IsIpAddress(str);
	cout<<res<<endl;
	
	
}
