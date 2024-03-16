#include <stdio.h> 
int main(void)  
{ 
int m, i, sum = 0, sq; 
printf("Enter the number of m= "); 
scanf("%d", &m); 
printf("The square natural numbers up to %d m= ", m); 
for (i = 1; i <= m; i++)  
{ 
} 
sq = i * i; 
printf("%d ", sq); 
sum = sum + sq; 
printf("\nThe Sum of Square Natural Numbers %d m = %d\n", m, sum); 
return 0; 
}
