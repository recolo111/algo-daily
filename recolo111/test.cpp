#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

struct student{
	string name;
	int gardeping;
	int gardeban;
	char ganbu;
	char xibu;
	int lunwen;
	int ans;
	int sum;
}stu[101];

bool map(student a, student b){
	if(a.ans == b.ans){
		return a.sum < b.sum;
	}
	else{
		return a.ans > b.ans;
	}
};

int main(){
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> stu[i].name >> stu[i].gardeping >> stu[i].gardeban >> stu[i].ganbu >> stu[i].xibu >> stu[i].lunwen;
		stu[i].sum = i;
	}
	
	int ans, answer = 0;
	for(int i = 0; i < N; i++){
		ans = 0;
		if(stu[i].gardeping > 80 && stu[i].lunwen >= 1){
			ans = ans + 8000;
		}
		if(stu[i].gardeping > 85 && stu[i].gardeban > 80){
			ans = ans + 4000;
		}
		if(stu[i].gardeping > 90){
			ans = ans + 2000;
		}
		if(stu[i].gardeping > 85 && stu[i].xibu == 'Y'){
			ans = ans + 1000;
		}
		if(stu[i].gardeban > 80 && stu[i].ganbu == 'Y'){
			ans = ans + 850;
		}
		stu[i].ans = ans;
		answer = answer + ans;
	}
	
	sort(stu, stu + N, map);
	cout << stu[0].name << endl << stu[0].ans << endl << answer;
	return 0;
}




