#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    int a[n];
    double tBike[n],tWalk[n];
    string result;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        tBike[i]= (double)a[i]/3+27+23;
        tWalk[i]= (double)a[i]/1.2;
        if(tBike[i]==tWalk[i])
            result="All";
        else
            result = tBike[i]>tWalk[i]? "Walk":"Bike";
        cout<<result<<endl;
    }

    return 0;
}
