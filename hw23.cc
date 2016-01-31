#include<iostream>
using namespace std;

int main(){
	int k,m=0,n=0,l=0,a[99];
	cin>>k;
    for(int i=0;i<k;i++){
        cin>>a[i];
        if(a[i]==1){
            m++;
        }else if(a[i]==5){
            n++;
        }else if(a[i]==10){
            l++;
        }
    }

    cout<<m<<endl<<n<<endl<<l<<endl;
    return 0;
}
