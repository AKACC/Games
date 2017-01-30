# Games
There are two ways to create dies in C console application. The key point is how to pick random numbers from 1-6. Using srand() function can pick numbers based on time which are never the same:srand(time(NULL)). Then rand() function can set up the limitation of random number(eg.rand()%6+1).
