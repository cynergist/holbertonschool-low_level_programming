# Ox1E. C - Search Algorithms

## Tasks
0. Linear search // 0-linear.c
A function that searches for a value in an array of integers using the [Linear search](https://en.wikipedia.org/wiki/Linear_search) algorithm

1. Binary search // 1-binary.c
A function that searches for a value in a sorted array of integers using the [Binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm) algorithm

2. Big O #0 // 2-O
What is the `time complexity` (worst case) of a linear search in an array of size `n`?

3. Big O #1 // 3-O
What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

4. Big O #2 // 4-O
What is the `time complexity` (worst case) of a binary search in an array of size `n`?

5. Big O #3 // 5-O
What is the `space complexity` (worst case) of a binary search in an array of size `n`?

6. Big O #4 // 6-O
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```