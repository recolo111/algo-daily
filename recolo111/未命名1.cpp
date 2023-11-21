#include<stdio.h>
int main()
{   double s, you, j=2;
    int bu = 0;
    you = 0.00;
    scanf("%lf", &s);
    if(s <= 2){
    printf("1");
	}
       for( ; you < s; ){
          you = you + j;
          bu++;
          if(you < s)
          j = (j * 98)/ 100;
          printf("j=%2lf you=%2lf\n", j, you);
        }
    printf("%d", bu);
    return 0;
}
