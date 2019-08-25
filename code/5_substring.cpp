#include<vector>
#include<iostream>
#include<string>
using namespace std;

void AllSubString(string str, int len)
{
    int i = 0;
    vector<string> substr;
    string strtemp;
    for(; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            for(int k = i; k <= j ; k++)
                strtemp += str[k];
            substr.push_back(strtemp);
            strtemp = "";
        }
    }
    for(int i=0;i<substr.size();i++)
    {
    	if(substr[i]==str)
    	{
    		continue;
		}
    	cout<<substr[i]<<endl;
	}
}

int main()
{
	string str = "abc";
	AllSubString(str,str.size());
	
}
