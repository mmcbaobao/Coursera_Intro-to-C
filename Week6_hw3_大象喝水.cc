/*编程题＃2：大象喝水
描述:
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。
问大象至少要喝多少桶水才会解渴。
输入:
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。
输出:
输出一行，包含一个整数，表示大象至少要喝水的桶数。*/


#include<iostream>
using namespace std;

int main(){
	int n,r,h;
    double Pi=3.14159;
    
    cin>>h>>r;
    
    double v=(double)Pi*r*r*h;
    
    n = 20000/v+1;
    
    cout<<n;
    
    return 0;
}
