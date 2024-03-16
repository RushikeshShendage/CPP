#include <stdio.h> 
int main(void)  
{ 
int rows, i, j, n=1; 
printf("Enter number of rows= "); 
scanf("%d", &rows); 
for (i = 0; i < rows; i++)  
{ 
} 
for (j = 0; j < rows - i; j++)  
{ 
} 
printf("  "); 
for (j = 0; j <= i; j++)  
{ 
} 
printf("%4d", n); 
n = n * (i - j) / (j + 1); 
printf("\n"); 
return 0;
}
