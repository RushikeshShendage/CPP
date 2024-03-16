#include <stdio.h> 
int main(void)  
{ 
int n, i; 
long long sum = 0, term = 9, m = 10; 
printf("enter the number of n: "); 
scanf("%d", &n); 
printf("The series is: "); 
for (i = 0; i < n; i++)  
{ 
} 
printf("%lld ", term); 
sum += term; 
term = term * m + 9; 
printf("\nThe sum of the series = %lld\n", sum); 
return 0;
}
