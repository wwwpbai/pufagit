#include<iostream>
#include<vector>
using namespace std;

int Ysf(vector<int> &ya,int n,int m,int p)
{
	if(n==1)
	    return ya.front();
	else
	{
		//删除第m个 
	    ya.erase(ya.begin()+(m+p-1)%n);
	    //然后将第m个作为下一个的开始位置继续删除 
	     return Ysf(ya,n-1,m,(m+p-1)%n);
	}     
}

int getResult(int n, int m) {
        vector<int> ya;
        for(int i=0;i<n;i++)
            ya.push_back(i+1);
        return  Ysf(ya,n,m,0);
    }
    
int main()
{
	int n,m;
	cin>>n>>m;
	int res = getResult(n,m);
	cout<<res<<endl;
  return 0;
}
