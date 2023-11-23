#include<stdio.h>
int main(){
	int N, anwser = 0, ans = 0;
	int a[10];
	scanf("%d", &N);

		for(int i = 0; ; i++){
			if(N == 0){
				break;
			}
			a[i] = N % 10;
			//printf("a[i]=%d\n", a[i]);
			N = N / 10;
			ans++;
		}			
		for(int i = 0; ; ans--, i++){
			if(ans == 0){
					//printf("%d", anwser);
					break;
			}
				//printf("a[i]=%d\n",a[i]);
				anwser = anwser * 10 + a[i];		
				}
				
		printf("%d\n", anwser);
	return 0;   
}



