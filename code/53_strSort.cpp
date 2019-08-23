#include<iostream>
#include<string>
using namespace std;

int partion(string &str,int s, int t)
{
	char temp = str[s];
	while(s<t)
	{
		while(s<t && str[t]<temp)
		{
			t--;
		}
		if(s<t)
		{
			str[s] = str[t];
			s++;
		}
		while(s<t && str[s]>temp)
		{
			s++;
		}
		if(s<t)
		{
			str[t] = str[s];
			t--;
		}
	}
	str[s] = temp;
	return s;
}

void quickSort(string &str,int s,int t)
{
	if(s<t)
	{
		int i = partion(str,s,t);
		quickSort(str,s,i-1);
		quickSort(str,i+1,t);
	}
}

int main()
{
	string str = "12sf3FD";
	quickSort(str,0,str.size()-1);
	cout<<str<<endl;
	
}
