#include<iostream>
#include<vector>
using namespace std;

void bubleSort(vector<int> &arr)
{
	int swap =0;
	for(int i=1;i<arr.size();i++)
	{
		swap = 0;
		for(int j =1;j<=arr.size()-i;j++)
		{
			if(arr[j-1]>arr[j])
			{
				int temp = arr[j-1];
				arr[j-1]=arr[j];
				arr[j] =temp;
				swap = 1;
			}
		}
		if(swap==0)
		{
			return;
		}
	}
}
int main()
{
	vector<int> arr{9,4,12,8,1};
	bubleSort(arr);
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
