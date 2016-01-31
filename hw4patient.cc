#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int n;
    cin>>n;
    int a[n];
    float b[4];
    
    for(int i=0;i<4;i++)
        b[i]=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=1 && a[i]<=18)
            b[0]++;
        else if(a[i]>=19 && a[i]<=35)
            b[1]++;
        else if(a[i]>=36 && a[i]<=60)
            b[2]++;
        else if(a[i]>=61)
            b[3]++;
    }

    
    cout<<fixed<<setprecision(2) <<"1-18: "<<float (b[0]/n*100)<<"%"<<endl;
    cout<<fixed<<setprecision(2) <<"19-35: "<<float (b[1]/n*100)<<"%"<<endl;
    cout<<fixed<<setprecision(2) <<"36-60: "<<float (b[2]/n*100)<<"%"<<endl;
    cout<<fixed<<setprecision(2) <<"60-: "<<float (b[3]/n*100)<<"%"<<endl;
    
    return 0;
}
