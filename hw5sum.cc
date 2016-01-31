#include<iostream>
using namespace std;


int main(){
    
    int n,a[5],b[5],sum=0;
    cin>>n;
    
    for(int i=0;i<5;i++){
        cin>>a[i];
        b[i]=0;
        if(a[i]<n){
            b[i]=a[i];
        }
        sum+=b[i];
    }
    
    cout<<sum;
    
    return 0;
}
