#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<vector<int> > vec{{1,2,3},{4,5,6},{7,8,9}};
	int sum =0;
	for(int i =0;i<vec.size();i++)
	{
		sum += vec[i][i];
	}
	int len = vec[0].size()-1;
	for(int i=0;i<vec.size() && len >=0;i++,len--)
	{
		sum += vec[i][len];
	}
	cout<<sum<<endl;
}
