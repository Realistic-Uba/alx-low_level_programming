# 0x08. C - Recursion #

The goal of this project is to explore the use of recursive algorithms in C programming. Recursive algorithms are a powerful tool for solving problems that involve repeated subproblems of the same type. In this project, we will implement several recursive algorithms in C and analyze their performance and behavior.

## Resources ##
- [0x08. Recursion, introduction](https://intranet.alxswe.com/rltoken/dzZB83Hm3lO7dScjhebAxw)
- [What on Earth is Recursion?](https://intranet.alxswe.com/rltoken/xYjKl3024oN58Bi_621_vQ)
- [C - Recursion](https://intranet.alxswe.com/rltoken/u4ojc5CZpf4qiuQvmXCiOA)
- [C Programming Tutorial 85, Recursion pt.1](https://intranet.alxswe.com/rltoken/Wv-wffgpXelN9ZTrbmiOyA)
- [C Programming Tutorial 86, Recursion pt.2](https://intranet.alxswe.com/rltoken/7GVdI-KT-M1vOIzwEjSahQ)

## Learning Objectives ##
At the end of this project, you are expected to be able to explain to anyone, **without the help of Google:**

### General ###
- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn’t implement recursion

## Tasks ##

**0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**

Write a function that prints a string, followed by a new line
- Prototype:` void _puts_recursion(char *s);`

FYI: The standard library provides a similar function: puts. Run man puts to learn more

**1. Why is it so important to dream? Because, in my dreams we are together**

 Write a function that prints a string in reverse.
- Prototype:`void _print_rev_recursion(char *s);`

**2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**

 Write a function that returns the length of a string.
- Prototype: `int _strlen_recursion(char *s);`
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

**3. You mustn't be afraid to dream a little bigger, darling**

Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
- If n is lower than 0, the function should return -1 to indicate an error
- Factorial of 0 is 1

**4. Once an idea has taken hold of the brain it's almost impossible to eradicate**

Write a function that returns the value of x raised to the power of y.
- Prototype: `int _pow_recursion(int x, int y);`
- If y is lower than 0, the function should return -1

FYI: The standard library provides a different function: pow. Run man pow to learn more.

**5. Your subconscious is looking for the dreamer**

Write a function that returns the natural square root of a number.

- Prototype: `int _sqrt_recursion(int n);`
- If n does not have a natural square root, the function should return -1

FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

**6. Inception. Is it possible?**

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype: `int is_prime_number(int n);`
