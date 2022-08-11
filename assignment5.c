// // solution 1
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many times you want to print MySirG\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("MySirG\n");
//     }
//     return 0;
// }

// // solution 2
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many natural numbers you want to print\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// // solution 3
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many natural numbers you want to print in reverse order\n");
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// // solution 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many odd numbers you want to print \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n * 2; i += 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// // solution 5
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many odd numbers you print in reverse order\n");
//     scanf("%d", &n);
//     for (int i = n * 2; i >= 1; i--)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// // solution 6
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many even numbers you want to print\n");
//     scanf("%d", &n);
//     for (int i = 2; i <= n * 2; i += 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// // solution 7
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many even numbers you want to print in  reverse order\n");
//     scanf("%d", &n);
//     for (int i = 2 * n; i > 1; i -= 2)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// // solution 8
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", i * i);
//     }
//     return 0;
// }

// // solution 9
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         printf("%d\n", i * i * i);
//     }
//     return 0;
// }

// // solution 10
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to print its multiplication table\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", n, i, i * n);
//     }
//     return 0;
// }