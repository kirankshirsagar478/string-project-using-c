#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str1[10],str2[10];
    int ch;
    printf("\n Enter first string:");
    scanf("%s",&str1);
    printf("\n Enter second string:");
    scanf("%s",&str2);
    printf("\nchoose operation=");
    printf("\n1.string compare");
    printf("\n2.string copy");
    printf("\n3.string length");
    printf("\n4.string concatination");
    printf("\n5.exit");
    printf("\nEnter your choise:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        if (strcmp(str1,str2)==0)
        {
            printf("\n both string are same");
        }
        else{
            printf("\n both strings are not same");
        }
        break;

        case 2:
        strcpy(str1,str2);
        printf("\n after copying string=%s",str1);
        break;
        case 3:
        printf("\nlength of first string=%d",strlen(str1));
        printf("\nlength of second string=%d",strlen(str2));
        break;
        case 4:
        strcat (str1,str2);
        printf("\n string concatination=",str1);
        break;
        case 5:
        break;
        default:
        printf("\n Invalid choise");
        break;
    }
    getch();
    

}