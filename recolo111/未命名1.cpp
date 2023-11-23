
#include<stdio.h>
int main()
{   
	int N,  ant = 1, max = 0;
	scanf("%d", &N);
	long a[10000];
	for(int i = 1; i <= N; i++){
		scanf("%d",&a[i]);
		//printf("%d",a[i]);
	}
	if(N!=1){
		printf("here");
		for(int i = 1; i <= N; i++){
			if(a[i] < a[i+1]){
				ant++;
				//printf("ant=%d\n", ant);
				if(ant > max){
					max = ant + 1;
					//printf("max=%d\n", max);
				}
			}
			else{
				ant = 1;
			}
		}	
	}
	else{
		max = 1;
	}
	printf("%d", max);
	return 0;
}

