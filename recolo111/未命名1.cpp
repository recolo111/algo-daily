#include<stdio.h>
int main()
{
	int n=0 ;
	scanf("%d",&n);
	int a[5], b[5], c[5];
	
	for(int i = 0; i < 3; i++){
		scanf("%d %d", &a[i], &b[i]);
		//printf("a[i]=%d b[i]=%d ", a[i], b[i]); 
			if(n % a[i] > 0){
				c[i] = n / a[i] + 1;
				c[i] = b[i] * c[i];
                //printf("c[i]=%d ",c[i]);
	    	}
	    	else{
	    		c[i] = n / a[i];
	    		c[i] = b[i] * c[i];
                //printf("c[i]=%d ",c[i]);
			}
		}
	
	int min=0;
	min=c[0];
	//printf("min=%d ",min);
	for(int i = 0; i < 3; i++){
	    if(c[i] < min){
	   	      min=c[i]; 
		} 
	     
	}
	printf("%d", min);
	return 0 ;
}
