#include<iostream>
using namespace std;


int main(){
    
    int n,m;
    cin>>n>>m;
    int a[n+m];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    
    for(int i=m+n-1;i>m-1;i--)
        a[i]=a[i-m];

    
    for(int i=0;i<m;i++)
        a[i]=a[i+n];
    

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}
