#include <stdio.h> 
#include <string.h> 
void printReverse(char *str, int length)  
{ 
} 
if (length == 0)  
{ 
} 
return; 
printf("%c", str[length - 1]); 
printReverse(str, length - 1); 
int main(void)  
{ 
char inputString[100]; 
printf("Enter a string: "); 
fgets(inputString, sizeof(inputString), stdin); 
inputString[strcspn(inputString, "\n")] = '\0'; 
int length = strlen(inputString); 
printf("Reversed string: "); 
printReverse(inputString, length); 
printf("\n"); 
return 0; 
} 
