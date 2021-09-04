#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	char Str[99];
	char reverseStr[99];
	char *strPtr=Str;
	char *reversePtr=reverseStr;
	int length=0;
	printf("Pointer : Print a string in reverse order :\n");
	printf("-------------------------------------------\n");
	printf("Input a string : ");
	scanf("%[^\n]s",Str);
	while(*strPtr!='\0') {
		strPtr++;
		length++;
	}
	//printf("\n%d",length);
	while(length>0){
		strPtr--;
		*reversePtr = *strPtr;
		reversePtr++;
		length--;
	}
	*reversePtr = '\0';
	printf("Reverse of the string is : %s",reverseStr);
	return 0;
}