#include<vector>
#include<iostream>
using namespace std;

//�ݹ�ⷨ 
int getPeach(int n)
{
	int sum =0;
	if(n==10)
	{
		return 1;
	}
	else
	{
		sum = getPeach(n+1);
		sum = (sum+1)*2;
	}
	return sum;
}

//��̬�滮
int getPeachDp(int)
{
	vector<int> vec(10);
	vec[9]=1;
	int len =vec.size()-2;
	for(int i=len;i>=0;i--)
	{
		vec[i]=(vec[i+1]+1)*2;
	}
	return vec[0];
 } 
int main()
{
	int n=1;
	int sum = getPeach(1);
	cout<<"�ݹ�ⷨ"<<sum<<endl;
	
	int sumdp = getPeachDp(1);
	cout<<"��̬�滮"<<sumdp<<endl;
	
}
