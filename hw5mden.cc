#include<iostream>
#include<string>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    int size=n-10+1;
    
    int a[size],b[size];
    
    for(int i=0;i<size;i++){
        a[i]=10+i;
        b[i]=0;
        if(a[i]%(a[i]/10+a[i]%10)==0){
            b[i]=a[i];
        }
    }
    
    
    for(int i=0;i<size;i++){
        if(b[i]!=0){
            cout<<b[i]<<endl;
        }
    }

    return 0;
}
