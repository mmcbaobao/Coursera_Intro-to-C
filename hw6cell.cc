#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    
    int n,num=0;
    cin>>n;
    int a[n][n];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    
    
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(a[i][j]<=a[i-1][j]-50 && a[i][j]<=a[i+1][j]-50 && a[i][j]<=a[i][j-1]-50 && a[i][j]<=a[i][j+1]-50){
 //               cout<<"a:"<<a[i][j]<<" ";
                num++;
            }
        }
    }
    
    cout<<num;
    
    return 0;
}
