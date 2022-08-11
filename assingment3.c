// // solution 1
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check wheather it is positive or non-positive\n");
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         printf("The given number is positive.\n");
//     }
//     else
//     {
//         printf("The given number is non-positive .\n");
//     }
//     return 0;
// }

// // solution 2
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check wheather it is divisible by 5 or not\n");
//     scanf("%d", &n);
//     if (n % 5 == 0)
//     {
//         printf("The given number is divisible by 5\n");
//     }
//     else
//     {
//         printf("The given number is not divisible by 5\n");
//     }

//     return 0;
// }

// // solution 3
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check it is even or odd\n");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         printf("The given number is even\n");
//     }
//     else
//     {
//         printf("The given number is odd\n");
//     }
//     return 0;
// }

// // solution 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check weather it is even or odd\n");
//     scanf("%d", &n);
//     if ((n & 1) == 0)
//     {
//         printf("the given number is even\n");
//     }
//     else
//     {
//         printf("the given number is odd\n");
//     }
//     return 0;
// }

// // solution 5
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check it is a three digit number or not\n");
//     scanf("%d", &n);
//     if (n > 99 && n < 1000)
//     {
//         printf("The given number is  a three digit number\n");
//     }
//     else
//     {
//         printf("The given number is not a three digit number\n");
//     }
//     return 0;
// }

// // solution 6
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter two numbers to find greater among them\n");
//     scanf("%d%d", &a, &b);
//     if (a > b)
//     {
//         printf("%d is greater than %d\n", a, b);
//     }
//     else if (a == b)
//     {
//         printf("Both numbers are same %d\n", a);
//     }
//     else
//     {
//         printf("%d is greater than %d\n", b, a);
//     }
//     return 0;
// }

// // solution 7
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     printf("Enter value of a, b, c from equation ax2 + bx + c=0 \n");
//     scanf("%d%d%d", &a, &b, &c);
//     d = (b * b) - (4 * a * c) if (d > 0)
//     {
//         printf("real & distinct\n");
//     }
//     else if (d == 0)
//     {
//         printf("real & equal\n");
//     }
//     else if (d < 0)
//     {
//         printf("imagnary \n");
//     }
//     return 0;
// }

// // solution 8
// #include <stdio.h>
// int main()
// {
//     int y;
//     printf("Enter year to check wheater it is leap year or not\n");
//     scanf("%d", &y);
//     if (y % 100 == 0)
//     {
//         if (y % 400 == 0)
//         {
//             printf("the given year (%d) is a centuary year\n", y);
//         }
//         if (y % 4 == 0)
//         {
//             printf("the given year (%d) is a leap year\n", y);
//         }
//         else
//         {
//             printf("The given year (%d) is not a leap year\n");
//         }
//     }

//     return 0;
// }

// // solution 9
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers to find gratest among them\n");
//     scanf("%d%d%d", &a, &b, &c);
//     if (a > b && b > c)
//     {
//         printf("%d is greatest than  %d and %d\n", a, b, c);
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d is greatest than  %d and %d\n", b, a, c);
//     }
//     else
//     {
//         printf("%d is greatest than  %d and %d\n", c, a, b);
//     }
//     return 0;
// }

// // solutiojn 10
// #include <stdio.h>
// int main()
// {
//     float cp, sp, profit, loss;
//     printf("Enter cost price, selling price of the product\n");
//     scanf("%f%f", &cp, &sp);
//     if (sp > cp)
//     {
//         profit = sp - cp;
//         printf("The pofit percentage is %f\n", (profit / cp) * 100);
//     }
//     else
//     {
//         loss = cp - sp;
//         printf("The loss percentage is %f\n", (loss / cp) * 100);
//     }
//     return 0;
// }

// // solution 11
// #include <stdio.h>
// int main()
// {
//     int p, c, m, b, e, tm;
//     printf("Enter your marks in P,C,M,B,E in sequence\n");
//     scanf("%d%d%d%d%d", &p, &c, &m, &b, &e);
//     tm = p + c + m + b + e;
//     if (p < 33 || c < 33 || m < 33 || b < 33 || e < 33)
//     {
//         printf("You failed in exam\n");
//     }
//     else
//     {
//         printf("You passed in exam with %d out of 500 marks\n", tm);
//     }
//     return 0;
// }

// // solution 12
// #include <stdio.h>
// int main()
// {
//     char a;
//     printf("Enter an Alphabet to check its case\n");
//     scanf("%c", &a);
//     if (a <= 122 && a >= 97)
//     {
//         printf("The Alphabet %c is lowercase\n", a);
//     }
//     else
//     {
//         printf("The alphabet %c is uppercase", a);
//     }
//     return 0;
// }

// // solution 13
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check wheather it is divisible by 2 & 3\n");
//     scanf("%d", &n);
//     if (n % 2 == 0 && n % 3 == 0)
//     {
//         printf("The number is divisible by both 2 and 3\n");
//     }
//     else
//     {
//         printf("The number is not divisible by both 2 and 3\n");
//     }
//     return 0;
// }

// // solution 14
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check wheather it is divisible by 2 & 3\n");
//     scanf("%d", &n);
//     if (n % 3 == 0 || n % 7 == 0)
//     {
//         printf("The number is divisible by either 7 or 3\n");
//     }
//     else
//     {
//         printf("The number is not divisible by both 7 and 3\n");
//     }
//     return 0;
// }

// // solution 15
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to chack that it is positive, negative  or  zero\n");
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         printf("The given number is positve\n");
//     }
//     else if (n < 0)
//     {
//         printf("The given number is negative\n");
//     }
//     else
//     {
//         printf("The given number is zero\n");
//     }
//     return 0;
// }

// // solution 16
// #include <stdio.h>
// int main()
// {
//     char a;
//     printf("Enter a charcter \n");
//     scanf("%c", &a);
//     if (a >= 65 && a <= 90)
//     {
//         printf("The given character is an uppercase alphabet\n");
//     }
//     else if (a >= 97 && a <= 122)
//     {
//         printf("The given character is an lowercase alphabet\n");
//     }
//     else if (a >= 91 && a <= 96)
//     {
//         printf("The given character is an special character \n");
//     }
//     else
//     {
//         printf("The given charcter is an digit\n");
//     }
//     return 0;
// }

// // solution 17
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     printf("Enter sides of triangle\n");
//     scanf("%d%d%d", &a, &b, &c);
//     if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
//     {
//         printf("It is a valid trianglel\n");
//     }
//     else
//     {
//         printf("It is a invalid trianglel\n");
//     }
//     return 0;
// }



// // solution 18
// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("Enter month number \n");
//     scanf("%d", &m);
//     if (m >= 1 && m <= 12)
//     {
//         if (m == 1)
//         {
//             printf("JANUARY has : 31 days\n");
//         }
//         else if (m == 2)
//         {
//             printf("FEBRUARY has : 28 days\n");
//         }
//         else if (m == 3)
//         {
//             printf("MARCH has : 31 days\n");
//         }
//         else if (m == 4)
//         {
//             printf("APRIL has : 30 days\n");
//         }
//         else if (m == 5)
//         {
//             printf("MAY has : 31 days\n");
//         }
//         else if (m == 6)
//         {
//             printf("JUNE has : 30 days\n");
//         }
//         else if (m == 7)
//         {
//             printf("JULY has : 31 days\n");
//         }
//         else if (m == 8)
//         {
//             printf("AUGUST has : 31 days\n");
//         }
//         else if (m == 9)
//         {
//             printf("SEPTEMBER has : 30 days\n");
//         }
//         else if (m == 10)
//         {
//             printf("OCTOBER has : 31 days\n");
//         }
//         else if (m == 11)
//         {
//             printf("NOVEMBER has : 30 days\n");
//         }
//         else if (m == 12)
//         {
//             printf("DECEMBER  has : 31 days\n");
//         }
//     }
//     else
//     {
//         printf("Enter valid month number\n");
//     }
//     return 0;
// }