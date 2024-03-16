#include <stdio.h> 
int main(void)  
{ 
int start, end, number, originalNumber, digitCount, result; 
printf("Input starting number of range: "); 
scanf("%d", &start); 
printf("Input ending number of range: "); 
scanf("%d", &end); 
printf("Armstrong numbers in the given range are: "); 
for (number = start; number <= end; ++number)  
{ 
originalNumber = number; 
result = 0; 
digitCount = 0; 
int temp = originalNumber; 
while (temp != 0)  
{ 
} 
temp /= 10; 
++digitCount; 
originalNumber = number; 
while (originalNumber != 0)  
{ 
} 
int remainder = originalNumber % 10;             
int power = 1; 
for (int i = 0; i < digitCount; ++i)  
{ 
} 
power *= remainder; 
result += power; 
originalNumber /= 10; 
if (result == number) 
printf("%d ", number); 
} 
printf("\n"); 
return 0; 
}
