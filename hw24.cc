#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
    int a[n],k[n];
    for(int i=0;i<n;i++){
        k[i]=0;
        cin>>a[i];
        while(a[i]>0){
            if(a[i]%2==1)
                k[i]++;
            a[i]=a[i]/2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<k[i]<<endl;
    }
    return 0;
}
