#include<iostream>
#include<string>
using namespace std;


int main(){
    
    char str[500];
    int num1=0,num2=0,len[500]={0};
    int j=0;
    cin.getline(str,500);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '|| str[i]=='.'){
            j+=1;
            len[j]=i;
         }
    }
    
    num1=len[0];
    num2=len[1];
    
    for(int i=1;i<j;i++){
        if(num2-num1<len[i+1]-len[i]-1){
            num1=len[i]+1;
//            cout<<"num1="<<num1<<endl;
            num2=len[i+1];
//            cout<<"num2="<<num2<<endl;
        }
    }
    
    
    for(int i=num1;i<num2;i++){
        cout<<str[i];
    }

    return 0;
}
