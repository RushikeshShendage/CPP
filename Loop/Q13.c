#include <stdio.h> 
int main(void)  
{ 
int n, m, i, j; 
printf("Enter the number of n: "); 
scanf("%d", &n); 
for (i = 1; i <= n; i++)  
{ 
for (m = i; m < n; m++)  
{ 
printf(" "); 
} 
for (j = 1; j <= i; j++)  
{ 
printf("* "); 
} 
printf("\n"); 
} 
return 0; 
}
