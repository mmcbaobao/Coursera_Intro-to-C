#include<iostream>
#include<string>
using namespace std;


int main(){
    
    int n,k;
    cin>>n>>k;
    
    int a[n];
    
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    
    string result = "no";
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[i]+a[j+1]==k){
                result = "yes";
                break;
            }
        }
    }
    
    cout<<result;

    return 0;
}
