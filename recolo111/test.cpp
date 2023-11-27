#include<stdio.h>
int main()
{ 
	int n;
	scanf("%d", &n);
	int a, b, c = 0, t = 0;//a是测试数，t是判断数，c计数；
	int x[3000];
	for(int i = 0;i < 3000; i++){
		x[i] = 0;
	}
	for(a = 2; a < n; a++){
//		printf("a = %d ",a);
		b = a - 1;
		t = 0;
//		printf("b = %d\n",b);
		
		for(; b > 1; b--){
			if((a % b) == 0){  //判断不是素数；                                                                                                                      
				t = 1;
				break;
			}
//			printf("b = %d\n",b);
		}
		
		if(t == 1){
			continue;
		}	
		if(a == 2 || t == 0){
//			printf("a = %d ",a);
			x[c] = a;
//			printf("c = %d ", c);
//			printf("x[c] = %d \n",x[c]);
			c++;
		}
		
	}	//素数排列结束。
	
	int i, j, k;
	int ans = 0;
	for( i = 0; i < c; i++){
		for( j = 0; j < c; j++){
			for( k = 0; k < c; k++){
				if(x[i] + x[j] + x[k] == n&&x[i] > 0&&x[j] > 0&&x[k] > 0){
//					printf("i = %d j = %d k = %d\n", i, j, k);
//					printf("x[i] = %d x[j] = %d x[k] = %d\n", x[i], x[j], x[k]);
					printf("%d %d %d", x[i], x[j], x[k]);
					ans = 1;
					break;	
				}
			}
		if(ans == 1){
			break;
		}
		}
	if(ans == 1){
		break;
	}
	}
	return 0;
}

