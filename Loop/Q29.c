#include <stdio.h> 
int main(void)  
{ 
int num, a = 0, b; 
printf("Enter an integer: "); 
scanf("%d", &num); 
while (num != 0)  
{ 
} 
b = num % 10; 
a = a * 10 + b; 
num = num / 10; 
printf("Reversed Number: %d\n", a); 
return 0;
}
