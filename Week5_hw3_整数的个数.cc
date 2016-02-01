/*编程题＃3：整数的个数
描述:
给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
输入:
输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出:
输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。*/

#include<iostream>
using namespace std;

int main(){
	int k,m=0,n=0,l=0,a[99];
	cin>>k;
    for(int i=0;i<k;i++){
        cin>>a[i];
        if(a[i]==1){
            m++;
        }else if(a[i]==5){
            n++;
        }else if(a[i]==10){
            l++;
        }
    }

    cout<<m<<endl<<n<<endl<<l<<endl;
    return 0;
}
