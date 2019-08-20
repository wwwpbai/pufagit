#include<vector>
#include<iostream>
using namespace std;

int main()
{
	
	int row,col;
	cin>>row>>col;
	vector<vector<int> > arr(row,vector<int>(col));
	for(int i =0;i<row;i++)
	{
		for(int j =0;j<col;j++)
		{
			int temp;
			cin>>temp;
			arr[i][j]=temp;
		}
	}
	
	for(int i =0;i<row;i++)
	{
		for(int j =0;j<col;j++)
		{
			
			cout<< arr[i][j] <<"\t";
		}
		cout<<endl;
	}
}
