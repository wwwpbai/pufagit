#include<iostream>
#include<vector>
using namespace std;

void oddEven(vector<int>&vec)
{
	if(vec.size()<=0)
	{
		return;
	}
	int begin = 0;
	int end = vec.size()-1;
	while(begin<end)
	{
		while(begin<end && ((vec[begin]&1) ))
		{
			begin++;
		}
		while(begin<end && ( !(vec[end]&1)))
		{
			end--;
		}
		if(begin<end)
		{
			int temp = vec[begin];
			vec[begin] = vec[end];
			vec[end]=temp;
		}
	}
}


int main()
{
	vector<int> vec{2,4,5,6,9,1};
	oddEven(vec);
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
	
	
}
