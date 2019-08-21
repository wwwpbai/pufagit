#include<iostream>
#include<vector>
using namespace std;

vector<int> replaceZero(vector<int> arr)
{
	int len = arr.size();
	vector<int> res (len);
	int index = 0;
	for(int i=0;i<len;i++)
	{
		if(arr[i]!=0)
		{
			res[index]=arr[i];
			index++;
		}
		
	}
	return res;
}


int main()
{
	vector<int> arr{1,3,0,3,6,0,0,9};
	vector<int> res = replaceZero(arr);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	
	
	
}
