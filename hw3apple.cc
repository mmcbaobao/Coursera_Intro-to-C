#include<iostream>
using namespace std;

int main(){
	int n,x,y,result;
    
    cin>>n>>x>>y;
    
    if(y%x==0 && n>=y/x)
        result = n-y/x;
    else if(y%x!=0 && n>=(y/x-1))
        result = n-y/x-1;
    else
        result = 0;
    cout<<result;
    
    return 0;
}
