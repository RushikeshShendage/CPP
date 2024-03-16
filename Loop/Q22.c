#include <stdio.h> 
#include<math.h> 
int main(void) 
{ 
int a, b, remainder, result = 0, n = 0; 
printf("Input a = "); 
scanf("%d", &a); 
 
    b = a; 
    while (b != 0)  
    { 
        b /= 10; 
        ++n; 
    } 
    b = a; 
    while (b != 0)  
    { 
        remainder = b % 10; 
        result += pow(remainder, n); 
        b /= 10; 
    } 
    b = a; 
    while (b != 0)  
    { 
        remainder = b % 10; 
        b /= 10; 
    } 
    if (result == a) 
        printf("%d is an Armstrong \n", a); 
    else 
        printf("%d is not an Armstrong \n", a); 
 
    return 0; 
}
