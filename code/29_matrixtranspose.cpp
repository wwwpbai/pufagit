#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int> > &vec, vector<vector<int> >&transmatrix)
{
	int row = vec.size();
	int col = vec[0].size();
	for(int i =0;i<row;i++)
	{
		for(int j = 0;j<col;j++)
		{
			transmatrix[j][i]=vec[i][j];
		}
	}
}
int main()
{
	vector<vector<int> >vec{{1,2,3},{4,5,6}};
	int row = vec.size();
	int col = vec[0].size();
	vector<vector<int> >transmatrix(col, vector<int>(row));
	transpose(vec,transmatrix);
	for(int i =0;i<col;i++)
	{
		for(int j =0;j<row;j++)
		{
			cout<<transmatrix[i][j]<<"\t";		
		}
		cout<<endl;
	}	
	
	
}
