#include<stdio.h>
#include<conio.h>
int main() 
{ 

int x,y,n,m=0; 

printf("��J n �A�D 1 ~ n ������� �G "); 
scanf("%d",&n); 

for ( x = 2 ; x <= n ; x++) 
{ 
m =0; 

for ( y= 1 ; y <= n ; y++) 
{ 
if( (x% y) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t �O��� !\n",x); 

} 
getch(); 
return 0; 

}

