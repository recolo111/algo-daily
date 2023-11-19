#include<stdio.h>
int main()
{ int i,a,b,max,answer;
  int x[7];
  for(i=0;i<7;i++){
    scanf("%d %d",&a,&b);
    x[i]=a+b;}
  for(max=0,i=6;i>=0;i--){
    if(x[i]>=max&&x[i]>=8)
    max=x[i];
    else if(i==0&&x[i]<8)
    answer=0;
	}
  //printf("%d",max);
  for(i=6;i>=0;i--){
  	if(max==0)
  	break;
    else if(x[i]==max)
    answer=i+1;}
  printf("%d",answer);
  return 0;
 }    

