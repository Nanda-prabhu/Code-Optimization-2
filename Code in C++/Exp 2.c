// C program to perform binary addition?

// i) Using function
// ii) Input must be integer.
// iii)Perform binary addition
// iv) Print the the result

#include<stdio.h>
int main()
{
    long binary1,binary2;
    int i=0,remainder=0,sum[20];
    scanf("%ld", &binary1);
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}

// Input :100000
//        101010

// Output :
// Sum of two binary numbers: 1001010