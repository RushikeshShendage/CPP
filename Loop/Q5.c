#include <stdio.h> 
int main() 
{ 
int n, i; 
printf("Enter an integer: "); 
scanf("%d", &n); 
printf("Cube of numbers up to %d:\n", n); 
for (i = 1; i <= n; i++) { 
printf("Cube of %d = %d\n", i, i * i * i); 
} 
return 0; 
} 
