#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    int chars, n, a, num,p=0,c=0;
    char *ptr;
    ptr = (char *)malloc((chars + 1) * sizeof(char));
    printf("WELCOME\n");
    printf("Enter your Name :");
    scanf("%s", ptr);
    printf("How many matches you wanna play in one game\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {

        printf("INVALID ENTRY");
        goto start;
    }
    for (int i = 1; i <= num; i++)
    {
        printf(" Enter your option\n 1:Rock\n 2:Paper\n 3:Scissors\n ", a);
        scanf("%d", &a);
        if (a == 1)
        {
            printf("You choosed Rock\n");
        }
        else if (a == 2)
        {
            printf("You choosed Paper\n");
        }
        else if (a == 3)
        {
            printf("You choosed Scissors\n");
        }
        else
        {
            goto end;
        }
        printf("The choice of computer is ");
        n = randomnumber(3);
        if (n == 0)
        {
            printf(" Rock\n");
        }
        else if (n == 1)
        {
            printf(" paper\n");
        }
        else if (n == 2)
        {
            printf(" scissors\n");
        }
        switch (a)
        {
        case 1:
            if (n == 0)
            {
                printf("\nDRAW..!!\n \n");
                p += 1;
                c += 1;
            }
            else if (n == 1)
            {
                printf("\nBETTER LUCK NEXT TIME %s\n \n", ptr);
                c += 1;

            }
            else if (n == 2)
            {
                printf("\nCONGRATULATIONS %s YOU WON\n \n", ptr);
                p += 1;
            }
            break;
        case 2:
            if (n == 0)
            {
                printf("\nCONGRATULATIONS %s YOU WON\n \n", ptr);
                p += 1;
            }
            else if (n == 1)
            {
                printf("\nDRAW..!!\n \n");
                p += 1;
                c += 1;
            }
            else if (n == 2)
            {
                printf("\nBETTER LUCK NEXT TIME %s\n \n", ptr);
                c += 1;
            }
            break;
        case 3:
            if (n == 0)
            {
                printf("\nBETTER LUCK NEXT TIME %s\n \n", ptr);
                c += 1;
            }
            else if (n == 1)
            {
                printf("\nCONGRATULATIONS %s YOU WON\n \n", ptr);
                 p += 1;
            }
            else if (n == 2)
            {
                printf("\nDRAW..!!\n \n");
                 p += 1;
                c += 1;
            }
            break;
        end:
        default:
            printf("\nINVALID ENTRY\n \n");
            break;
        }
    }
    printf("%s = %d\ncomp = %d\n",ptr,p,c);
     if (p > c)          
        {
            printf("YOU WON THE SERIES %s\n",ptr);
        }
        else if(p == c)
        {
            printf("DRAW due to same points ...!!\n");
        }
        else if(p < c){
          printf("YOU LOST THE SERIES %s\n",ptr);
        }
start:
    return 0;
}
