#include<stdio.h>
#include<iostream>
#include <string.h>
using namespace std;
int main()
{	
	string a;
	getline(cin, a);
	///cout << a << endl;
	string b;
	getline(cin, b);
	//cout << b << endl;
	a = a + ' ';
	b = b + ' ';
//	strcat(b," ");
	int j,i;
	for(i = 0; a[i] != '\0'; i++){
		if(a[i] >= 'a'){
			a[i] = a[i] - 32;
			//printf("%s\n", a);
		}
	}
	for(i = 0; b[i] != '\0'; i++){
		if(b[i] >=  'a'){
			b[i] = b[i] - 32;
			//printf("%s\n", b);
		}
	}//ȫ����ת���ɴ�д��
	
	int flag, k, ans = 0, weizhi, n = 0;	//ansָ������nָ���е�λ�á�
	for(i = 0; b[i] != '\0'; i++){
		//printf("i = %d\n", i);
		//printf("b[i] = %d\n",b[i]);
		if(b[i] == ' '){
			flag = 1;			
			for(j = n, k = 0; j <= i && a[k] != '\0'; k++, j++){
				//printf("b[i] = %d\n",b[j]);
				if(b[j] == a[k]){
					flag = flag * 1;
				}
				else{
					flag = flag * 0;
				}
			}
			//������ĸ��ͬ��֮��Ӱ��ôν����
			
			if(flag == 1){
				ans++;
			}
			if(flag == 1 && ans == 1){
				weizhi = n;//�����״�λ��
			}	
			n=i;
			n++;
		}
	}
	
	if(ans == 0){
		printf("-1");
	}
	else{
		printf("%d ", ans);
		printf("%d", weizhi);
	}
	return 0;   
}
