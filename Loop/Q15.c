#include <stdio.h> 
int main(void)  
{ 

int n, i, sum = 0; 
printf("Input number of terms: "); 
scanf("%d", &n); 
printf("The even numbers are: "); 
for (i = 2; i <= 2 * n; i += 2)  
{ 
} 
printf("%d ", i); 
sum = sum +i; 
printf("\nThe Sum of even Natural Numbers up to %d terms: %d\n", n, sum); 
return 0;
}
