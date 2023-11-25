#include<stdio.h>
int main()
{ 
	int n, s;
	scanf("%d %d", &n, &s);//苹果数 n，力气 s。
	int a, b;
	//int c;
	scanf("%d %d", &a, &b);//椅子的高度 a，陶陶手伸直的最大长度 b。
	//c = a + b;//c是陶陶能碰到最大高度
	int x[5010], y[5010];

		for(int i = 0; i < n; i++){
			scanf("%d %d",&x[i], &y[i]);
			//printf("x[i]=%d y[i]=%d\n", x[i], y[i]);
		}
	//printf("x[0]=%d y[0]=%d\n", x[0], y[0]);
	
	int i, j;
	int t;
	for(i = 0; i < n - 1; i++ ){
		for(j = 0; j <( n - 1 - i); j++){
			if(y[j] > y[j + 1]){
			t = x[j];
			x[j] = x[j + 1];
			x[j + 1] = t; 
			t = y[j];
			y[j] = y[j + 1];
			y[j + 1] = t;
			}
		}
	}
	
	int ans = 0;
	for(i = 0;i < n&&s >= 0; i++){
		//printf("x[i]=%d ",x[i]);
		//printf("y[i]=%d\n",y[i]);
		if(x[i] > a + b){
			continue;
		}
		else{
			if(s - y[i] >= 0){
				s = s - y[i];
				//printf("s=%d\n",s);
				ans++;
			}
			else if(s == 0){
				break;
			}
		}
	}
	printf("%d",ans);
	return 0;
}




