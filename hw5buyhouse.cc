#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    
    double n,k,m,a=200;
    cin>>n>>k;
    
    for(m=1;!(a<m*n||m>20);m++){
        a=a*(1+k/100);
    }
    
    if(m>20)
        cout<<"Impossible"<<endl;
    else if(n<10||n>50)
        cout<<"Impossible"<<endl;
    else if(k<1||k>20)
        cout<<"Impossible"<<endl;
    else
        cout<<m;

    return 0;
}
