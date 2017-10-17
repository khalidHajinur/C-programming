/*/*
 * C Program to reverse a string using loop
 */
#include <stdio.h>
#include <string.h>
#define  FALSE 0
#define TRUE 1
int alphabetic(char * string){
    int i, valid;
    valid= TRUE;
    
    for (i=0; i<strlen(string); i++ ){
        if((string[i]<'A' || string[i] >'Z') &&
           (string[i]<'a' || string[i] >'z'))
            valid = FALSE;
    }
    return  valid;
}

void main()
{
    char inputString[11], reversedstring[11],temp;
    long length, leftIndex, rightIndex;
    printf("Please enter string>\n");
    fgets(inputString, 11, stdin);
    if(inputString[ strlen(inputString)-1]=='\n')
        inputString[strlen(inputString)-1]='\0';
    else
    {
        while (getchar() != '\n')
        {
            printf("String is too long \n");
            return;
        }
    }
        /* Find length of string */
    length = strlen(inputString);
    /*
     * Initialize leftIndex and rightDex to position
     * of first and last character of String
     */
    leftIndex = 0;
    rightIndex = length -1;
    strcpy(reversedstring, inputString);
    
    while(leftIndex < rightIndex){
        temp = inputString[leftIndex];
        inputString[leftIndex] = inputString[rightIndex];
        inputString[rightIndex] = temp;
        
        leftIndex++;
        rightIndex--;
    }
    if (alphabetic(inputString));
    else{
            printf("invalid input\n");
        return ;
    }
    if(strcmp(reversedstring,inputString) == 0)
        printf("%s is a Palindrome\n", inputString);
    else{
        printf("%s is not a palindrome\n", inputString);
    }
    
    //  printf("Reversed string is: %s\n", inputString);;
    //   printf(reversedstring);
    return ;
}
