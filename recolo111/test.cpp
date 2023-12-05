#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
struct people{
	int hao;
	int garde;
}peo[5001];

bool map(people a, people b){
	if(a.garde == b.garde){
		return a.hao < b.hao;
	}
	else{
		return a.garde > b.garde;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> peo[i].hao >> peo[i].garde;
	}
	
	sort(peo + 1, peo + n + 1, map);
//	for(int i = 1; i <= n; i++){
//		cout << peo[i].hao <<' '<< peo[i].garde << endl;
//	}
	
	int a = (15 * m) / 10;
	int ans = 0;
	for(int i = 1; i <= a; i++){
//		cout << peo[i].hao <<' '<< peo[i].garde << endl;
		ans++;
		if(i == a){
			for(i = i + 1; ; i++){
				if(peo[i].garde == peo[a].garde){
//					cout << peo[i].hao <<' '<< peo[i].garde << endl;
					ans++;
				}
				else{
					break;
				}
			}
		}
	}
	
	cout << peo[a].garde <<' '<< ans << endl;
	
	for(int i = 1; i <= a; i++){
		cout << peo[i].hao <<' '<< peo[i].garde << endl;
		if(i == a){
			for(i = i + 1; ; i++){
				if(peo[i].garde == peo[a].garde){
					cout << peo[i].hao <<' '<< peo[i].garde << endl;
				}
				else{
					break;
				}
			}
		}
	}	
}



