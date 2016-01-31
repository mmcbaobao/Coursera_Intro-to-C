#include<iostream>
using namespace std;

int main(){
	int n,r,h;
    double Pi=3.14159;
    
    cin>>h>>r;
    
    double v=(double)Pi*r*r*h;
    
    n = 20000/v+1;
    
    cout<<n;
    
    return 0;
}
