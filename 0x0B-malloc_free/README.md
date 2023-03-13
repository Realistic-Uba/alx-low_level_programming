Automatic and dynamic allocation, malloc and free
The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

Automatic allocation
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

Special case: string literals

One special case we have seen so far is the memory used to store strings that we put within double quotes (") in our programs.

The string "Holberton" that was just declared is stored automatically in memory when the program is launched. But, the memory that stores the string is only readable. In fact, if you try to change a character using str, you will have a little surprise :)

Dynamic allocation
So far we have used variables, arrays with fixed size. But what happens if you do
not know the size of the array you have to declare and / or if this size depends on
another variable?
Note: remember, you can declare arrays only with a constant.
type variable[constant]; /* works */
int n;
n = 10;
type variable[n]; /* does not work */

malloc
#include <stdlib.h>
void *malloc(size_t size);
The malloc() function allocates size bytes and returns a pointer to the allocated
memory
The memory is not initialized

Why would I need dynamic allocation?

So far we only have seen functions and programs that had fixed inputs. What happens when we do not know in advance how much memory you need and we will only know this at runtime, after compilation?

For instance, imagine we have to create a program that will store all the words contained in a file in an array. That file is passed as an argument to our program. There is no way we could know in advance how many words the file will contain. We can not declare a big array like char *words[1024]; and assume that there will never be more than 1024 words in the file. That’s when malloc and friends come to the rescue, and will permit us to allocate dynamically the amount of memory we need.

Dynamic allocation
Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

Prototype: void *malloc(size_t size);
where void * means it is a pointer to the type of your choice
and size is the number of bytes your need to allocated

Valgrind is an instrumentation framework for building dynamic analysis tools. There are Valgrind tools that can automatically detect many memory management and threading bugs, and profile your programs in detail. You can also use Valgrind to build new tools.

The Valgrind distribution currently includes seven production-quality tools: a memory error detector, two thread error detectors, a cache and branch-prediction profiler, a call-graph generating cache and branch-prediction profiler, and two different heap profilers. It also includes an experimental SimPoint basic block vector generator. It runs on the following platforms: X86/Linux.

0. Float like a butterfly, sting like a bee
mandatory
Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings
mandatory
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

2. He who is not courageous enough to take risks will accomplish nothing in life
mandatory
Write a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure

3. If you even dream of beating me you'd better wake up and apologize
mandatory
Write a function that returns a pointer to a 2 dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up
mandatory
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);
Note that we will compile with your alloc_grid.c file. Make sure it compiles.

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
#advanced
Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string

6. I will show you how great I am
#advanced
Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
