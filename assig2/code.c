#include <stdio.h>
#include <string.h>

//Hindu/Arabic
void hindu(int n)
{
    printf("%d", n);
    return;
}

//Roman numerals
void roman(int n)
{
    while (n != 0)
    {
        if (n >= 1000)
        {
            printf("M");
            n -= 1000;
        }

        else if (n >= 900)
        {
            printf("CM");
            n -= 900;
        }

        else if (n >= 500)
        {
            printf("D");
            n -= 500;
        }

        else if (n >= 400)
        {
            printf("CD");
            n -= 400;
        }

        else if (n >= 100)
        {
            printf("C");
            n -= 100;
        }

        else if (n >= 90)
        {
            printf("XL");
            n -= 90;
        }

        else if (n >= 50)
        {
            printf("L");
            n -= 50;
        }

        else if (n >= 40)
        {
            printf("XL");
            n -= 40;
        }

        else if (n >= 10)
        {
            printf("X");
            n -= 10;
        }

        else if (n >= 9)
        {
            printf("IX");
            n -= 9;
        }

        else if (n >= 5)
        {
            printf("V");
            n -= 5;
        }

        else if (n >= 4)
        {
            printf("IV");
            n -= 4;
        }

        else if (n >= 1)
        {
            printf("I");
            n -= 1;
        }
    }
    return;
}

//Unary number
void unary(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("I");
    }
    return;
}

//Binary number
void binary(int n)
{

    int binary_n[50];
    int i = 0;
    while (n > 0)
    {
        binary_n[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary_n[j]);
    }
    return;
}
int main()
{
    int option,n;
    int n1;
    int n2;
    printf("Enter two number\n");
    scanf("%d %d", &n1,&n2);
    printf("Enter the type of operation \n1. Addition \n2. Multipilcation \n");
    int opt;
    scanf("%d",&opt);
        if (opt == 1)
            n = n1+n2;
        if (opt == 2)
            n = n1 * n2;

    printf("\n");
    printf("Press 1 to convert to Hindu/Arabic number\nPress 2 to convert to Roman number\nPress 3 to convert to Unary number\nPress 4 to convert to Binary number\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        hindu(n);
        break;
    case 2:
        roman(n);
        break;
    case 3:
        unary(n);
        break;
    case 4:
        binary(n);
        break;

    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}
