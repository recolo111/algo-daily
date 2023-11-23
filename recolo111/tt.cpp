#include<stdio.h>
int main()
{   
	int n = 0, ant=0;
	scanf("%d", &n);
	int a[10000];
	for(int i = 0; i < n; i++){
		if((i+1) == n){
			scanf("%d",&a[i]);
		}
		else{
			scanf("%d ", &a[i]);
		}
		
//		printf("i=%d ", i);
//		printf("a[i]=%d\n", a[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				continue;
			}
			for(int k = 0; k < n; k++){
				//printf("a[i]=%d a[j]=%d a[k]=%d\n",a[i],a[j],a[k]);
				if(a[j] == a[k]){
					continue;
				}
				if(a[i] == (a[j] + a[k])){
					ant++;
				//printf("ant=%d\n",ant);
				}
			}
		}
	}
	
	printf("%d", ant/2);
	return 0;
}
