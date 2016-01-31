#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int j=n;j>0;j--){
        cout<<a[j-1]<<" ";
    }

    return 0;
}
