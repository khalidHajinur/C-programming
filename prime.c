//
//  main.c
//  Prime
//
//  Created by Khalid Hajinur on 18/11/2016.
//  Copyright © 2016 Khalid Hajinur. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FALSE 0
#define TRUE 1

int numeric(char *string) {
    int i, valid, points=0;
    valid = TRUE;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] < '0' || string[i] >'9')
            valid = FALSE;
    }
    return valid;
}

void main()
{
    
    char num[4];
    int n;
    int c;
    printf("Please enter a decimal number>  ");
    fgets(num, 4, stdin);
    if (num[strlen(num) - 1] == '\n')
        num[strlen(num) - 1] = '\0';
    else
    {
        while (getchar() != '\n')
        {
            printf("More than 3 characters\n");
            return;
        }
    }
    if (!numeric(num)) {
        printf("Invalid Input\n");
        return;
    }
    n = atoi(num);
    for (c = 2; c <= n - 1; c++)
    {
        if (n%c == 0)
        {
            printf("%d is not prime.\n", n);
            return;
        }
    }
    if (c == n)
        printf("%d is a prime number\n", n);
    
    return;
    
    
}

