#include<iostream>
using namespace std;

int main(){
	int m,n,sum=0;
	cin>>m>>n;
    for (;m<=n;m+=1){
        if(m%2==1 && 0<=m && n<=300){
            sum+=m;
        }
    }
    cout<<sum<<endl;
    return 0;
}
