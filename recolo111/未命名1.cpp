#include<stdio.h>
int main()
{
	int  bu = 0;
	double you = 0, s;
	scanf("%lf", &s);
	double a[1000];
	a[0] = 2;
	//printf("a[0]=%lf\n", a[0]);
			
	if(s <= 2){
		printf("1");
	}
	
	else{
		for(int i = 0;;){
			you = you + a[i];
			//printf("you = %lf\n",you);
			
			bu++;
			if(you > s){
			printf("%d\n",bu);
			break;
			}
			i++;	
			//printf("i = %d\n", i);	
			a[i] = a[i-1] * 0.98;
			//printf("a[i] = %lf\n", a[i]);
		}
 	return 0;   
	}
}

