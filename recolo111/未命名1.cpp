#include<stdio.h>
int a[10];
int sum(int i,int a[])
	{
		for(int b = 0; i > 0; ){
               b = i % 10;
               //printf("b=%d ", b);
			   a[10]=1;
			   if(b == 0)
               a[10] = 0;
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
{   int  i, ans = 0;
    int x, y, z, b;
    int A, B, C;
	scanf("%d %d %d",&A, &B, &C);
    
    for(int i = 0; (C * i) <= 999; i++){
	 a[1] = 1, a[2] = 2, a[3] = 3;
	 a[4] = 4, a[5] = 5, a[6] = 6;
	 a[7] = 7, a[8] = 8, a[9] = 9;
       x = A * i;
	   y = B * i;
	   z = C * i;
	   sum(x,a);
	   sum(y,a);
	   sum(z,a);
	   if(a[10]==0)
	   continue;
	      //printf("a[1]=%d ",a[1]);
	         if(a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==0){
	            printf("%d %d %d\n", x, y, z);
	            ans++;
	        }    
	}
    if(ans == 0){
    	printf("No!!!");
	}
	return 0 ;
}






