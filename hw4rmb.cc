#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    
	int n,a[6];
    cin>>n;
    
    for(int i=0;i<6;i++){
        a[i]=0;
    }
    
    if(n>=100){
        a[0]=n/100;
        n=n-a[0]*100;
    }
        
    if(n>=50){
        a[1]=n/50;
        n=n-a[1]*50;
    }
    
    if(n>=20){
        a[2]=n/20;
        n=n-a[2]*20;
    }
    
    if(n>=10){
        a[3]=n/10;
        n=n-a[3]*10;
    }

    if(n>=5){
        a[4]=n/5;
        n=n-a[4]*5;
    }
    
    if(n>=1){
        a[5]=n;
    }

    for(int i=0;i<6;i++)
        cout<<a[i]<<endl;
    
    return 0;
}
