#include <iostream>
#include <math.h>
#include<memory.h>
#define MAX_N 10000
using namespace std;
class Solution{
public:
    void printProbability(int n){
        if(n<=0){
            return;
        }
        cptTimes(n);
        for(int i=n;i<=6*n;++i){
            cout<<"总点数:"<<i<<endl;
            cout<<"概率"<<cntNew[i]/pow(6,n)<<endl;
        }
    }
private:
    long long cnt[6*MAX_N];
    long long cntNew[6*MAX_N];
    void cptTimes(int n){
       for(int k=1;k<=n;++k){
           if(k==1){
               for(int i=1;i<=6;++i){
                   cnt[i]=1;
               }
           }
           else{
               memset(cntNew,0,sizeof(cntNew));
               for(int i=k;i<=6*k;++i){
                   for(int j=1;j<=6&&i-j>=1;++j){
                       cntNew[i]+=cnt[i-j];
                   }
               }
               for(int i=k;i<=6*k;++i){
                   cnt[i]=cntNew[i];
               }
           }
       }
    }
};
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    Solution s=Solution();
    s.printProbability(n);
    return 0;
}
