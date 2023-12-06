#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

struct studet{
	int xuehao;
	int chinese;
	int math;
	int english;
	int endgarde;
}stu[301];

bool map(studet a , studet b){
	if(a.endgarde == b.endgarde){
		if(a.chinese == b.chinese){
			return a.xuehao  < b.xuehao;
		}
		else{
			return a.chinese > b.chinese;
		}
	}
	else{
		return a.endgarde > b.endgarde;
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		stu[i].xuehao = i + 1;
		cin >> stu[i].chinese >> stu[i].math >> stu[i].english;
		stu[i].endgarde = stu[i].chinese + stu[i].math + stu[i].english;
	}
	
	sort(stu, stu + n, map);
	
	for(int i = 0; i < 5; i++){
		cout << stu[i].xuehao <<' '<< stu[i].endgarde << endl;
	}
}
