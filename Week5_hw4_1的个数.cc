/*编程题＃4：1的个数
描述:
给定一个十进制整数N，求其对应2进制数中1的个数
输入:
第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
输出:
N行，每行输出对应一个输入。*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
    int a[n],k[n];
    for(int i=0;i<n;i++){
        k[i]=0;
        cin>>a[i];
        while(a[i]>0){
            if(a[i]%2==1)
                k[i]++;
            a[i]=a[i]/2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<k[i]<<endl;
    }
    return 0;
}
