#include<iostream>
using namespace std;

int drinkJuice(int money)
{
	int bottle = money;
	int empty = money;
	while(empty>1)
	{
		bottle += empty/2;
		empty = empty/2 + empty%2;
	}
	return bottle;
}


int main()
{
	int money = 20;
	int bottle = drinkJuice(money);
	cout<<"¿ÉÒÔºÈ"<<bottle<<"±­"<<endl;
	
}
