#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	//第一个整数表示贷款的原值 ，第二个整数表示每月支付的分期付款金额 ，第三个整数表示分期付款还清贷款所需的总月数 
	double w, w0, www;
	int m;	
	cin >> w >> w0 >> m;
	double l = 0, r = 500, middle;
	while(r - l > 0.0001){
		middle = (r + l) / 2;
//		printf("middle = %lf\n", middle);
		www = w;
		for(int i = 0; i < m; i++){
			www = www + www * (middle / 100) - w0; 
		}
		
		if(www > 0.0001){
			r = middle;
		}
		else{
			l = middle;
		}
	}
	printf("%.1lf", l);
}
