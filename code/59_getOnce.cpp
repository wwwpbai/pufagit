#include<iostream>
#include<vector>
using namespace std;

int getOnce(vector<int> &arr)
{
	int res =arr[0];
	for(int i =1;i<arr.size();i++)
	{
		res = res ^ arr[i];
	}
	return res;
}

int main()
{
	vector<int> arr {3,3,4,4,5,5,6};
	int res = getOnce(arr);
	cout<<res<<endl;
}
