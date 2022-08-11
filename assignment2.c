// //solution 1
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number \n");
//     scanf("%d", &a);
//     printf("The unit digit of given no is : %d\n", (a % 10));
//     return 0;
// }

// // solution 2
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number \n");
//     scanf("%d", &a);
//     printf("The given number with its unit digit deleted is: %d\n", (a / 10));
//     return 0;
// }

// // solution 3
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter two numbers\n");
//     scanf("%d%d", &a, &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("Numbers after swapping is a=%d and b=%d", a, b);
//     return 0;
// }

// // solution 4
// #include <stdio.h>
// int main ()
// {
// int a,b;
// printf("Enter two numbers to swap their values\n");
// scanf("%d%d",&a,&b);
// printf("The values of a and b before swaping is %d and %d respectivly\n",a,b);
// a=a*b;
// b=a/b;            
// a=a/b;            
// printf("The values of a and b after swaping is %d and %d respectivly\n",a,b);
// return 0;
// }

// // solution 5
// #include <stdio.h>
// int main()
// {
//     int a, b, c, sum, n;
//     printf("Enter a three digit number to get sum of its digits\n");
//     scanf("%d", &n);
//     a = (n % 10);
//     n = n / 10;
//     b = n % 10;
//     n = n / 10;
//     c = n % 10;
//     sum = a + b + c;
//     printf("Sum of the digits of the given no is %d\n", sum);
//     return 0;
// }

// // solution 6
// #include <stdio.h>
// int main()
// {
//     char a;
//     printf("Enter a character \n");
//     scanf("%c", &a);
//     printf("The ASCII code of '%c' is %d", a, a);
//     return 0;
// }

// // solution 7
// #include <stdio.h>
// int main()
// {
//     int a, i;
//     printf("Enter a number to find the position of first 1 in lsb\n");
//     scanf("%d", &a);
//     for (i = 1; a != 0; i++)
//     {
//         if (a & 1 == 1)
//         {
//             break;
//         }

//         a = a >> 1;
//     }

//     printf("Positon of first 1 in lsb of %d ", i);
//     return 0;
// }


// // solution 8
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number to check that it is even or odd\n");
//     scanf("%d", &a);
//     if (a & 1 == 1)
//     {
//         printf("The given number %d is odd\n", a);
//     }
//     else
//     {
//         printf("The given numbrer %d is even\n", a);
//     }
//     return 0;
// }

// // solution 9
// #include <stdio.h>
// int main()
// {
//     int a;
//     float b;
//     char c;
//     double d;
//     printf("Size of \"float variable\" is  : %d bytes\n", sizeof(b));
//     printf("Size of \"char variable\" is   : %d bytes\n", sizeof(c));
//     printf("Size of \"int variable\" is    : %d bytes\n", sizeof(a));
//     printf("Size of \"double variable\" is : %d bytes\n", sizeof(d));
//     return 0;
// }

// // solution 10
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number\n");
//     scanf("%d", &a);
//     a = a - (a % 10);
//     printf("The number after modification is: %d\n", a);
//     return 0;
// }

// // solution 11
// #include <stdio.h>
// int main()
// {
//     int n, d;
//     printf("Enter a number and the digit you want to append\n");
//     scanf("%d%d", &n, &d);
//     n *= 10;
//     n += d;
//     printf("The given number after modifiaction is %d", n);
//     return 0;
// }

// // solution 12
// #include <stdio.h>
// int main()
// {
//     float inr, usd;
//     printf("Enter amount in INR\n");
//     scanf("%f", &inr);
//     usd = inr * (1 / 76.3);
//     printf("The amount in USD is %f", usd);
//     return 0;
// }

// solution 13
#include <stdio.h>
int main ()
{
int n,a;
printf("Enter a three digit number \n");
scanf("%d",&n);
a=n%10;
n=n/10;
printf("The number after modification is %d\n", (a*100)+n);
return 0;
}