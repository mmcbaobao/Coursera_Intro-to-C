#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    
    cout<<fixed<<setprecision(1);
	int n,k;
    cin>>n>>k;
    int id[n];
    float grade[n];
    
    for(int i=0;i<n;i++){
        cin>>id[i]>>grade[i];
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(grade[j+1]>grade[j]){
                int tmpId=id[j];
                id[j]=id[j+1];
                id[j+1]=tmpId;
                float tmpGrade=grade[j];
                grade[j]=grade[j+1];
                grade[j+1]=tmpGrade;
            }
        }
    }
    
    
    cout<<id[k-1]<<" "<<grade[k-1];
    
    return 0;
}
