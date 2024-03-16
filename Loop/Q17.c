#include <stdio.h> 
int main(void)  
{ 
int rows, i, j, k; 
printf("Enter the number of rows= "); 
scanf("%d", &rows); 
for (i = 1, k = 0; i <= rows; ++i, k = 0)  
{ 
} 
for (j = 1; j <= rows - i; ++j)  
{ 
} 
printf("  "); 
while (k != 2 * i - 1)  
{ 
} 
printf("* "); 
++k; 
printf("\n"); 
return 0;
}
