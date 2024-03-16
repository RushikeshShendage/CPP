#include<stdio.h> 
int main (void) 
{ 
int a =5,i,j; 
for ( i=1; i<=a; i++) 
    { 
        for ( j=1; j<=i; j++) 
        { 
            printf("* "); 
        } 
        printf("\n"); 
 } 
  
 for(i=a-1; i>=1; i--) 
 { 
  for( j=1;j<=i;j++) 
   { 
    printf("* "); 
   } 
  printf("\n"); 
 }  
         
        return 0; 
}
