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
	int v[10000], k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for( k = 0; k < n; k++){
//				printf("a[i]=%d a[j]=%d a[k]=%d\n",a[i],a[j],a[k]);
				if(a[i] == (a[j] + a[k])&&j != k&&j != i&&k != i){
					ant++;
					v[k] = 1;
					break;
					printf("a[i]=%d a[j]=%d a[k]=%d\n",a[i],a[j],a[k]);
					printf("ant=%d\n",ant);
				}
			}
			if(v[k] == 1){
				break;
			}
		}
		if(v[k] == 1){
			v[k] = 0;
			continue;
		}
		
	}
	
	printf("%d", ant);
	return 0;
}
