#include <stdio.h> 
int main() { 
int rows, number = 1; 
printf("Enter the number of rows for Floyd's Triangle: "); 
scanf("%d", &rows); 
printf("Floyd's Triangle:\n"); 
for (int i = 1; i <= rows; i++) { 
for (int j = 1; j <= i; j++) { 
if ((i + j) % 2 == 0) { 
printf("1 "); 
} else { 
printf("0 "); 
} 
} 
printf("\n"); 
} 
return 0; 
} 
