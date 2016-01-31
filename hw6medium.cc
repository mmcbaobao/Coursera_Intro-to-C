#include<iostream>
using namespace std;


int main(){
    
    int n,count=0,result[100]={0};


    while(true){
        
        cin>>n;
        
        if(n==0)
            break;
        
        else{
            
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
        
            for(int i=0;i<n-1;i++){
                for(int j=1;j<n-i;j++){
                    if(a[j-1]>a[j]){
                        int temp=a[j];
                        a[j]=a[j-1];
                        a[j-1]=temp;
                    }
                }
            }
            
            if(n%2==1)
                result[count]=a[n/2];
            else if(n%2==0)
                result[count]=(a[n/2-1]+a[n/2])/2;
            count++;

        }
        
    }
    
    for(int i=0;i<count;i++)
        cout<<result[i]<<endl;
    
    return 0;
}
