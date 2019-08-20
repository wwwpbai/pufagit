#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int len = 100;
	vector<int>vec;
	for (int i = 1; i <= len; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			vec.push_back(i);
		}

	}
	for(int i =0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
	
	
}
