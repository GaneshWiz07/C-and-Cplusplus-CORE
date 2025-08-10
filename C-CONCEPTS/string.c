#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);
    printf("The length of the first string is %d\n", strlen(str1));
    printf("The length of the second string is %d\n", strlen(str2));
    printf("The concatenated string is %s\n", strcat(str1, str2));
    printf("The reversed string is %s\n", strrev(str1));
    printf("The copied string is %s\n", strcpy(str1, str2));
    printf("The compared string is %d\n", strcmp(str1, str2));
    printf("The substring is %s\n", strstr(str1, str2));
    printf("The uppercase string is %s\n", strupr(str1));
    printf("The lowercase string is %s\n", strlwr(str1));
    return 0;
}