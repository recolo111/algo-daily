#include<stdio.h>
int main()
{   double s, you, j;
    int bu;
    scanf("%1lf", &s);
       for( j = 2.00, bu = 1, you = 0.00; you < s; ){
          you = you + j;
          bu++;
          if(you < s)
          j = j * 100 / 98;
          //printf("j=%2lf you=%2lf\n", j, you);
        }
    printf("%d", bu);
}
