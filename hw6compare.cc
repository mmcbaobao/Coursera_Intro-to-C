#include<iostream>
#include<string>
using namespace std;


int main(){
    
    char str1[80]={0},str2[80]={0};
    char result;
    int i=0;
    cin.getline(str1,80);
    cin.getline(str2,80);
    
    while(str1[i]!='\0' && ((str1[i]==str2[i])||(str1[i]-str2[i]==32)||(str2[i]-str1[i]==32))){
        i++;
    }
    
    if(str1[i]>=97){
        str1[i]=str1[i]-32;
    }
    if(str2[i]>=97){
        str2[i]=str2[i]-32;
    }
    
    if(str1[i]>str2[i]){
        result='>';
    }else if(str1[i]<str2[i]){
        result='<';
    }else{
        result='=';
    }

    cout<<result;
    return 0;
}
