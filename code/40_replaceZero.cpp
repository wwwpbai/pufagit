#include<iostream>
#include<vector>
using namespace std;


//˼·1��ʹ��һ���µ�����������ԭ�������ʱ�ķ�0���� 
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


//˼·2������ʱ�ҵ���һ��0��Ȼ���ҵ���һ����0���֣����߽�����Ȼ��������߱��� 

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
