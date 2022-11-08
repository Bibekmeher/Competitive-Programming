#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,sum1=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=a[i][j];
            }
            if(j==n-1-i)
            
            {
                sum1+=a[i][j];
            }
        }
        
    }
    cout<<abs(sum-sum1);
return 0;
}
