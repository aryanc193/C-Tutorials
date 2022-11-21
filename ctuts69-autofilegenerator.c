#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
    char * resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else{
            resultString[i] = *str;
            i += 1;
            str +=1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    // char content[200] = "Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.";
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry 
    // {{item}}   - Table Fan 
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same
    // ptr1 = fopen("letter.txt", "w");
    // fprintf(ptr1, "%s", content);
    // fclose(ptr1);

    char str[200];
    FILE *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = fopen("letter.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    fgets(str, 200, ptr1);
    printf("The original text file:\n%s\n", str);
    
    char *newStr = str;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Ray");
    printf("\nThe text file with replace words:\n%s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
