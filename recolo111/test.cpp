#include<stdio.h>
int main()
{   
	int a[10], i;
	for( i = 0; i < 10; i++){
	  scanf("%d", &a[i]);
	  //printf("a[i]=%d\n",a[i]) ;
    }
	  int b, ant;
	  scanf("%d", &b);
	  //printf("b=%d\n",b) ;
	for(i = 0; i < 10; i++){
	    if(b + 30 >= a[i])
		ant++;
		}
		printf("%d", ant);
	return 0;
}

