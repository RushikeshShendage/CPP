#include <stdio.h> 
int  main(void) 
{ 
int i, f = 1, num; 
printf("Enter the number : "); 
scanf("%d", &num); 
for(i = 1; i <= num; i++) 
f = f * i; 
printf("The Factorial of %d is: %d\n", num, f); 
return 0; 
} 
