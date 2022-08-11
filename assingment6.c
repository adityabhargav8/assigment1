// // solution 1
// #include <stdio.h>
// int main()
// {
//     int n, sum;
//     printf("Enter how many natural numbers you want to add:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("Sum of N natural numbers is : %d", sum);
//     return 0;
// }

// // solution 2
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("Enter how many even natural number you want to add :\n");
//     scanf("%d", &n);
//     for (int i = 2; i <= n * 2; i += 2)
//     {
//         sum = sum + i;
//     }
//     printf("Sum of N  Even natural numbers is : %d", sum);
//     return 0;
// }

// // solution 3
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("Enter how many odd natural numbers you want to add:\n");
//     scanf("%d", &n);
//     for (int i = 1; i < n * 2; i += 2)
//     {
//         sum = sum + i;
//     }
//     printf("Sum of N Odd natural numbers is : %d", sum);
//     return 0;
// }

// // solution 4
// #include <stdio.h>
// int main()
// {
//     int n, sum;
//     printf("Enter a number:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + (i * i);
//     }
//     printf("Sum of squares N natural numbers is : %d", sum);
//     return 0;
// }

// // solution 5
// #include <stdio.h>
// int main()
// {
//     int n, sum;
//     printf("Enter a number:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + (i * i * i);
//     }
//     printf("Sum of squares N natural numbers is : %d", sum);
//     return 0;
// }

// // solution 6
// #include <stdio.h>
// int main()
// {
//     int n, fact = 1;
//     printf("Enter a number to find its factorial:\n");
//     scanf("%d", &n);
//     for (int i = n; i > 0; i--)
//     {
//         fact = fact * i;
//     }
//     printf("Factorial of the given number is: %d\n", fact);
//     return 0;
// }

// // solution 7
// #include <stdio.h>
// int main()
// {
//     int count = 1, n;
//     printf("Enter a number to count its digit:\n");
//     scanf("%d", &n);
//     while (n > 10)
//     {
//         n = n / 10;
//         count++;
//     }
//     printf("The number of digits in the given no is %d\n", count);
//     return 0;
// }

// // solution 8
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("Enter a number to check whether it is prime or not\n");
//     scanf("%d", &n);
//     for (i = 2; i <= (n / 2); i++)
//     {
//         if (n % i == 0)
//         {
//             break;
//         }
//     }
//     if (i > n / 2) // i==(n+2)/2
//     {
//         printf("The given number is prime number\n");
//     }
//     else
//     {
//         printf("The given number is not prime\n");
//     }
//     return 0;
// }

// solution 9
// #include <stdio.h>
//     int
//     main()
// {
//     int a, b, i;
//     printf("Enter two number to find their lcm\n");
//     scanf("%d%d", &a, &b);
//     for (i = 1; i <= 100; ++i)
//     {
//         if (i % a == 0 && i % b == 0)
//         {
//             break;
//         }
//     }
//     printf("lcm of %d and %d is %d\n", a, b, i);
//     return 0;
// }

// // solution 10
// #include <stdio.h>
// int main()
// {
//     int n, x, rev = 0;
//     printf("Enter a number to get its mirror number\n");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         x = n % 10;
//         rev = rev * 10 + x;
//         n /= 10;
//     }
//     printf("Reverse of the given numbrer is %d\n", rev);
//     return 0;
// }
