#include<iostream>
#include<vector>
using namespace std;

void encrypt(string& str,int k)
{
	for(int i=0;i<str.size();i++)
	{
		str[i]='A'+(str[i]-'A'+k)%26;
	}
}

void decrypt(string &str,int k)
{
	for(int i=0;i<str.size();i++)
	{
		str[i]='A'+(str[i]-'A'+26-k%26)%26;
	}
}
int main()
{
	string str = "ABC";
	int key =3;
	encrypt(str,key);
	cout<<str<<endl;
	decrypt(str,key);
	cout<<str<<endl;
	
}
