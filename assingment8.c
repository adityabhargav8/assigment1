// // SOLUTION 1
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j <= i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 2
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if ((6 - i) <= j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 3
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j <= (6 - i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 4
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i <= j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 5
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if ((6 - i) <= j && j <= (i + 4))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 6
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j >= i && j <= (10 - i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 7
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j <= (6 - i) || j >= (4 + i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // solution 8
// #include <stdio.h>
// int main()
// {
//     int a;
//     for (int i = 1; i <= 4; i++)
//     {
//         a = 1;
//         for (int j = 1; j <= 7; j++)
//         {
//             if ((5 - i) <= j && j <= (i + 3))
//             {
//                 printf("%d", a);
//                 if (j < 4)
//                 {
//                     a++;
//                 }
//                 else
//                 {
//                     a--;
//                 }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // SOLUTION 9
// #include <stdio.h>
// int main()
// {
//     int a;
//     for (int i = 1; i <= 4; i++)
//     {
//         a = 1;
//         for (int j = 1; j <= 7; j++)
//         {

//             if (j >= i && j <= (8 - i))
//             {
//                 printf("%d", a);
//                 if (j < 4)
//                 {
//                     a++;
//                 }
//                 else
//                 {
//                     a--;
//                 }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // solution 10
// #include <stdio.h>
// int main()
// {
//     int a;
//     for (int i = 1; i <= 4; i++)
//     {
//         a = 1;

//         for (int j = 1; j <= 7; j++)
//         {
//             if (j <= (5 - i) || j >= (3 + i))
//             {
//                 printf("%d", a);
//             }
//             else
//             {
//                 printf(" ");
//             }
//             if (j < 4)
//             {
//                 a++;
//             }
//             else
//             {
//                 a--;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //solution 11
// #include <stdio.h>
// int main()
// {
//     char a;
//     for (int i = 1; i <= 5; i++)
//     {
//         a = 'A';

//         for (int j = 1; j <= 9; j++)
//         {

//             if ((6 - i) <= j && j <= (i + 4))
//             {
//                 printf("%c", a);
//                 (j < 5) ? a++ : a--;
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // solution 12
// #include <stdio.h>
// int main()
// {
//     char a;
//     for (int i = 1; i <= 4; i++)
//     {
//         a = 'A';
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j >= i && j <= (8 - i))
//             {
//                 printf("%c", a);
//                 if (j < 4)
//                 {
//                     a++;
//                 }
//                 else
//                 {
//                     a--;
//                 }
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // solution 13
// #include <stdio.h>
// int main()
// {
//     char a;
//     for (int i = 1; i <= 7; i++)
//     {
//         a = 'A';
//         for (int j = 1; j <= 13; j++)
//         {
//             if (j <= (8 - i) || j >= (6 + i))
//             {
//                 printf("%c", a);

//             }
//             else
//             {
//                 printf(" ");
//             }
//             (j<7)? a++ : a--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //  solution 14
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j == i || j == 1 || i == 5)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //solution 15
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j == (6-i) || j == 5 || i == 5)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // solution 16
// #include <stdio.h>
// int main()
// {
//     int x = 5, y = 5;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j == x || j == y || i == 5)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         x--;
//         y++;
//         printf("\n");
//     }
//     return 0;
// }

// // solution 17
// #include <stdio.h>
// int main()
// {
//     int x = 1, y = 9;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j == x || j == y || i == 1)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         x++;
//         y--;
//         printf("\n");
//     }
//     return 0;
// }

// // solution 18
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         printf(" ");
//         for (int j = 1; j <= 7; j++)
//         {
//             if ((5 - i) <= j && j <= (i + 3))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j >= i && j <= (10 - i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// //solution 19
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 19; j++)
//         {
//             if (i == 4)
//             {
//                 printf("****** MySirG ******");
//                 break;
//             }

//             if ((j >= (4 - i) && j <= (6 + i)) || (j >= 14 - i && j <= 16 + i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 19; j++)
//         {
//             if (j >= i && j <= (20 - i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
