#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	//��һ��������ʾ�����ԭֵ ���ڶ���������ʾÿ��֧���ķ��ڸ����� ��������������ʾ���ڸ������������������ 
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
