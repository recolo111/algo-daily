#include<stdio.h>
int main()
{	int n, ans = 0;
	scanf("%d",&n);
	
	int a, b, c, d, e, f, g, h, i, j;
	if(n >= 10 && n <= 30){
		for( a = 1; a <= 3; a++){
			for( b = 1; b <= 3; b++){
				for( c = 1; c <= 3; c++){
					for( d = 1; d <= 3; d++){
						for( e = 1; e <= 3; e++){
							for( f = 1; f <= 3; f++){
								for( g = 1; g <= 3; g++){
									for( h = 1; h <= 3; h++){
										for( i = 1; i <= 3; i++){
											for( j = 1; j <= 3; j++){
												if(a + b + c + d + e + f + g + h + i + j == n){
													ans++;
												//printf("%d %d %d %d %d %d %d %d %d %d\n", j, i, h, g, f, e, d, c, b, a);
												//printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
												}
											}
										}
									}
								}
							}
						}
					}			
				}
			}
		}
	}
	
	printf("%d\n",ans);
	
	if(n >= 10 && n <= 30){
		for( a = 1; a <= 3; a++){
			for( b = 1; b <= 3; b++){
				for( c = 1; c <= 3; c++){
					for( d = 1; d <= 3; d++){
						for( e = 1; e <= 3; e++){
							for( f = 1; f <= 3; f++){
								for( g = 1; g <= 3; g++){
									for( h = 1; h <= 3; h++){
										for( i = 1; i <= 3; i++){
											for( j = 1; j <= 3; j++){
												if(a + b + c + d + e + f + g + h + i + j == n){
													ans++;
												//printf("%d %d %d %d %d %d %d %d %d %d\n", j, i, h, g, f, e, d, c, b, a);
												printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
												}
											}
										}
									}
								}
							}
						}
					}			
				}
			}
		}
	}
	return 0;   
}

