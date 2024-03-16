#include <stdio.h> 
int main(void)  
{ 
int start, end, i, j, n=1; 
printf("Enter the starting number of the range: "); 
scanf("%d", &start); 
printf("Enter the ending number of the range: "); 
scanf("%d", &end); 
printf("Prime numbers in the given range are: "); 
for (i = start; i <= end; ++i) 
{ 
} 
for (j = 2; j <= i / 2; ++j)  
{ 
} 
if (i % j == 0)  
{ 
} 
n = 0;  
break; 
if (n && i > 1) 
printf("%d ", i); 
printf("\n"); 
return 0; 
}
