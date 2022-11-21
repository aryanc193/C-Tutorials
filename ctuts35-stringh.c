#include <stdio.h>
#include <string.h>

int main()
{
    // char s1[] = "deadpool";
    // char s2[] = "batman";
    // char s3[54];
    // printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
    // //puts(strcat(s1, s2));
    // printf("\nThe length of s1 and s2 are %d and %d respectively\n", strlen(s1), strlen(s2));
    // printf("the reverse string s1 is: %s\n", strrev(s1));
    // //puts(strrev(s1));
    // printf("the reverse string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);

    char str1[50], str2[50], str4[50];
    char str3[] = " is a friend of ";
    printf("Enter string 1 : ");
    scanf("%s", &str1);
    printf("Enter string 2 : ");
    scanf("%s", &str2);

    strcpy(str4, strcat(str1, str3));
    puts(strcat(str4, str2));

    return 0;
}