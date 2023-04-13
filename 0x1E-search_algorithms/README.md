0x1E. C - Search Algorithms

Resources
> Resources
> Space complexity(1)


General
 . What is a search algorithm
 . What is a linear Search
 . What is a binary search
 . What is the search algorithm to use depending on your need

More Info

You will be asked to write files containing big O notations. Please use this format:
 . 0(1)
 . 0(n)
 . 0(n!)
 . n^m-> o(nm)
 . n square -> 0(n^2)
 . sqrtn -> 0(sqrt(n))
 . log(n) -> 0(log(n))
 . n*log(n) -> 0(nlog(n)
 . ...


Tasks

 0. Linear search
 
 Write a function that searches for a value in an array of integers using the Linear search algorithm
	. Prototype : int linear_search(int *array, size_t size, int value);
	. https://intranet.alxswe.com/projects/295#:~:text=linear_search(int%20*array%2C%20size_t%20size%2C%20int%20value)%3B-,Where%20array%20is%20a%20pointer%20to%20the%20first%20element%20of%20the%20ar	. Where array is a pointer to the first element of the array to search in
	. size is the number of elements in array
	. And value is the value to search for
	. Your function must return the first index where value is located
	. If value is not present in array or if array is NULL, your function must return -1
	. Every time you compare a value in the array to the value you are searching, you have to print

wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 1-binary.c
  
2. Big O #0
mandatory
What is the time complexity (worst case) of a linear search in an array of size n?

Repo:
	. GitHub repository: alx-low_level_programming
	. Directory: 0x1E-search_algorithms
	. File: 2-O

	. GitHub repository: alx-low_level_programming
	. 0x1E-search_algorithms
	. 0-linear.c



 1. Binary search

 Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
	. Prototype : int binary_search(int *array, size_t size, int value);
	. Where array is a pointer to the first element of the array to search in
	. size is the number of elements in array
	. And value is the value to search for
	. Your function must return the index where value is located
	. You can assume that array will be sorted in ascending order
	. You can assume that value won’t appear more than once in arra
	. If value is not present in array or if array is NULL, your function must return -1
	. You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

Repo: 
	. GitHub repository: alx-low_level_programming
	. Directory: 0x1E-search_algorithms
	. File: 1-binary.c
