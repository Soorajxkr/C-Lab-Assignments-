#include <stdio.h>
#include <conio.h>
#include <string.h>

int convert(int);

int main()
{
    int i, j, keylen, msglen, num1, num2, bi1, bi2;
    char input[30], key[30], temp[30], qout[100], rem[30], key1[30];

    printf("Enter the data.\n");
    scanf("%d", &num1);
    printf("Enter the Key.\n");
    scanf("%d", &num2);

    bi1 = convert(num1);
    printf("\nData in binary is %d", bi1);

    bi2 = convert(num2);
    printf("\nKey in binary is%d", bi2);

    sprintf(input, "%d", bi1);
    sprintf(key, "%d", bi2);

    keylen = strlen(key);
    msglen = strlen(input);
    strcpy(key1, key);

    for (i = 0; i < keylen - 1; i++)
    {
        input[msglen + i] = '0';
    }
    for (i = 0; i < keylen; i++)
    {
        temp[i] = input[i];
    }
    for (i = 0; i < msglen; i++)
    {
        qout[i] = temp[0];
        if (qout[i] == 0)
        {
            for (j = 0; j < keylen; j++)
            {
                key[j] = '0';
            }
        }
        else
        {
            for (j = 0; j < keylen; j++)
            {
                key[j] = key1[j];
            }
        }
        for (j = keylen - 1; j > 0; j--)
        {
            if (temp[j] == key[j])
                rem[j - 1] = '0';
            else
                rem[j - 1] = '1';
        }

        rem[keylen - 1] = input[i + keylen];
        strcpy(temp, rem);
    }

    strcpy(rem, temp);
    printf("\nQoutient is:");
    for (i = 0; i < msglen; i++)
        printf("%c", qout[i]);

    printf("\nRemainder:");
    for (i = 0; i < keylen; i++)
        printf("%c", rem[i]);

    printf("\nFinal Data:");
    for (i = 0; i < msglen; i++)
        printf("%c", input[i]);

    for (i = 0; i < keylen - 1; i++)
        printf("%c", rem[i]);

    getch();
    return 0;
}

int convert(int n)
{
    int bin = 0, rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        bin = bin + rem * i;
        i = i * 10;
    }
    return bin;
}
