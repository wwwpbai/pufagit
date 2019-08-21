#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> outputOnceNum(vector<int> &arr)
{
	map<int,int> mp;
	for(int i=0;i<arr.size();i++)
	{
		mp[arr[i]]++;
	}
	vector<int> res;
	map<int,int>::iterator mp_iter =mp.begin();
	for(;mp_iter!=mp.end();mp_iter++)
	{
		if(mp_iter->second==1)
		{
			res.push_back(mp_iter->first);
		}
	}
	return res;
}
int main()
{
	vector<int> arr{1,1,1,1,3,3,3,3,4,5,6,6};
	vector<int> res = outputOnceNum(arr);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	
}
