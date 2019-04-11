#include<stdio.h>
#include<conio.h>
int main() 
{ 

int x,y,n,m=0; 

printf("輸入 n ，求 1 ~ n 內的質數 ： "); 
scanf("%d",&n); 

for ( x = 2 ; x <= n ; x++) 
{ 
m =0; 

for ( y= 1 ; y <= n ; y++) 
{ 
if( (x% y) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t 是質數 !\n",x); 

} 
getch(); 
return 0; 

}

