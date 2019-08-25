#include<iostream>
#include<vector>
using namespace std;


//思路1：使用一个新的数组来保存原数组遍历时的非0数字 
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


//思路2：遍历时找到第一个0，然后找到第一个非0数字，两者交换，然后继续向后边遍历 

void replaceZeroAfter(vector<int> &arr)
{
	int len =arr.size();
	if(len==0)
		return ;
	int i =0;
	while(i < len)
	{
		if(arr[i]==0)
		{
			int k = i+1;
			while(k<len && arr[k]==0)
			{
				k++;
			}
			int temp = arr[i];
			arr[i]=arr[k];
			arr[k] =temp;
			k++;
			i++;
			
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	vector<int> arr{0,0,0,3,6,0,0,9};
	vector<int> res = replaceZero(arr);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
	cout<<endl;
	replaceZeroAfter(arr);
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
}
