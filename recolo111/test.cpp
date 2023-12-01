#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
//	cout << n << endl;
	int i, a[1000];
	for(i = 0; i < n; i++){
		cin >> a[i];
//		cout << a[i] <<endl;
	}
	
	
	int b[1000];
	for(i = 1; i < n; i++){
		if(a[i] - a[i - 1] < 0){
			b[i] = - (a[i] - a[i - 1]);
		}
		else{
			b[i] = a[i] - a[i - 1];
		}
//		cout << b[i] <<endl;
	}
	
	sort(b + 1, b + n);
	for(i = 1; i < n; i++){
		//cout << b[i] <<endl;
	}
	
	int flag;
	for(flag = 1, i = 1; i < n; i++){
		if(b[i] != i){
			flag = 0;
		}
	}
	if(flag == 1){
		cout << "Jolly";
	}
	else{
		cout << "Not jolly";
	}
	
	return 0;
}
