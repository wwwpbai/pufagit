#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int sum =4,oddnum =4;
	for(int i =2;i<=9;i++)
	{
		if(i<=2)
			oddnum *=7;
		else
			oddnum *=8;
		sum += oddnum; 
	}
	cout<<"number 9 of odd's number is"<<oddnum<<endl;
	cout<<"all number is"<<sum<<endl;
	
}
