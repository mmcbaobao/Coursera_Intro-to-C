#include<iostream>
#include<string>
using namespace std;


int main(){
    
    char str[80];
    int num[5]={0};
    cin.getline(str,80);
    
    for(int i=0;str[i]!='\0';i++){
        switch(str[i]){
            case 'a':num[0]++;break;
            case 'e':num[1]++;break;
            case 'i':num[2]++;break;
            case 'o':num[3]++;break;
            case 'u':num[4]++;break;
        }
    }
    
    
    for(int i=0;i<5;i++){
        cout<<num[i]<<' ';
    }

    return 0;
}
