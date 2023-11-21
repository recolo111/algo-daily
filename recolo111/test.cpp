#include<stdio.h>
int a[10];
int sum(int i,int a[])
	{
		for(int b = 0; i > 0; ){
               b = i % 10;
               //printf("b=%d ", b);
			   a[10]=1;
			   if(b == 0)
               a[10]=0;
			   i = i / 10;
			   //printf("i=%d ",i);
	              for(int c = 1; c <= 9; c++){
                     if(a[c] == b){
                        a[c] = 0;
                        //printf("Ñ­»·Àïa[c]=%d ", a[c]);
                        break;
					  }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	                }
	   }
	   return 0;
	}
	
int main()
{   int   i;
    int x, y, z, b;
    
    for(int i = 123;i <= 333; i++){
	 a[1] = 1, a[2] = 2, a[3] = 3;
	 a[4] = 4, a[5] = 5, a[6] = 6;
	 a[7] = 7, a[8] = 8, a[9] = 9;
       x = i;
	   y = 2 * i;
	   z = 3 * i;
	   sum(x,a);
	   sum(y,a);
	   sum(z,a);
	   if(a[10]==0)
	   continue;
	      //printf("a[1]=%d ",a[1]);
	         if(a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==0){
	            printf("%d %d %d\n", x, y, z);
	         }
    }
	return 0 ;
}
