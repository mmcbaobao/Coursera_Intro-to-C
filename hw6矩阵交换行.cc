#include<iostream>
#include<iomanip>
using namespace std;

#define N 5
int temp[N];

int exchange(int,int,int a[N][N]);

int exchange(int n,int m,int a[N][N]){
    if(n<0 || n>4 || m>4 ||m<0)
        return 0;
    else{
        for(int i=0;i<N;i++){
            temp[i]=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=temp[i];
        }
        return 1;
    }
}


int main(){
    
    int a[N][N];
    int n,m;
    
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            cin>>a[i][j];
        }
    
    cin>>n>>m;
    
    int r=exchange(n,m,a);
    
    if(r==0)
        cout<<"error"<<endl;
    else if(r==1){
         for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<setw(4)<<a[i][j];
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}
