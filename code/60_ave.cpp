#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

float getAveSom(vector<int> &arr)
{
	int minNum =arr[0];
	int maxNum = arr[0];
	float sum =arr[0];
	int len = arr.size();
	for(int i =1;i<len;i++)
	{
		minNum = min(minNum,arr[i]);
		maxNum = max(maxNum,arr[i]);
		sum+= arr[i];
	}
	sum = sum -minNum -maxNum;
	return (sum/(len-2));
}

int main()
{
	vector<int> arr {1,2,3,4,5,6,7,8,9,10};
	float res = getAveSom(arr);
	cout<<res<<endl;
}
