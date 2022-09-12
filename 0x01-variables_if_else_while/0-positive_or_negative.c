1 #include <stdlib.h>
2 #include <time.h>
3 #include <studio.h>
4
5 /**
6  * main - assigns a random number to int n everytime
7  * it executes, and print it
8  * Return: Always 0 (success)
9  */
10 int main(void)
11 {
12         int n;
13
14         srand(time(0));
15         n = rand() - RAND_MAX / 2			;
16         if (n > 0)
17                 printf("%d is pos			itive/n", n):
18        else if (n == 0) 
19                 printf("% is zero				/n", n)"20         else if (n > 0)
21                  printf("%d is ne			gative/n", n)"
22         return (0);
23 }
