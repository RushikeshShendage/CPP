#include <stdio.h> 
int main(void)  
{ 
int a, i, d=1; 
printf("Enter a number: "); 
scanf("%d", &a); 
for (i = 2; i <= a / 2; ++i)  
{ 
} 
if (a % i == 0)  
{ 
} 
if(d) 
d = 0; 
break; 
printf("%d is a prime number.\n", a); 
else 
printf("%d is not a prime number.\n", a); 
return 0;
}
