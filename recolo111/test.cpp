#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int a[4];
	for(int i = 0; i < 3; i++){
		cin >> a[i];
//		cout << a[i] <<endl;
	}
	sort(a, a+3);
	for(int i = 0; i < 3; i++){
//		cout << a[i] <<endl;
	}
	
	int max;
	for(max = a[0]; max > 0; max--){
		if(a[2] % max ==0&&a[0] % max == 0){
			break;
		}
	}
//	cout << 'max=' << max << endl;
	cout << a[0]/max << '/' << a[2]/max <<endl;
	return 0;
}
