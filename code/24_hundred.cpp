#include<iostream>
using namespace std;

//公鸡5文钱一只，母鸡3文钱一只，小鸡3只一文钱，
//用100文钱买一百只鸡,其中公鸡，母鸡，小鸡都必须要有，问公鸡，母鸡，小鸡要买多少只刚好凑足100文钱。 
int main()
{
	//公鸡，母鸡，小鸡 
	int a,b,c;
	for(a=1;a<20;a++)
	{
		for(b = 1;b<33;b++)
		{
			c = 100-a-b;
			if((c%3==0)&&(a*5+b*3+c/3==100))
			{
				cout<<"公鸡"<<a<<"母鸡"<<b<<"小鸡"<<c<<endl;
			}
		}
	}
	
}
