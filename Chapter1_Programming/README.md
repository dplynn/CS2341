# Chapter 1: Programming

This chapter is a review of important concepts and their C++ implementation 
used in this course. Very good short explanations can be found in this
[C++ YouTube Playlist](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb).

## Classes and Compiling
* A simple class called [IntCell](IntCell).
* What does the [compiler](https://en.wikipedia.org/wiki/Compiler), the [linker](https://en.wikipedia.org/wiki/Linker_(computing)),
  and the [loader](https://en.wikipedia.org/wiki/Loader_(computing)) do?

## Dynamic Memory Allocation and Pointers
* Some Questions:
  - Where do programs store variables and objects?
  - Where does memory come from and how is memory returned?
  - Why do we need dynamic memory allocation?
  - What is the difference between the stack and the heap.
  - What happens when you access memory that is not yours?

  See [program memory](https://en.wikipedia.org/wiki/Data_segment), [segmentation fault](https://en.wikipedia.org/wiki/Segmentation_fault).

* Example: Create a memory diagram for executing the following program:

    ```cpp
    int inc(int x) return x + 1;

    int main() {
      int a = 10;
      int b = inc(a);
      return 0;
    }
    ```

  - What are the differences between memory management in C, C++, Java and Python? (Most programming languages use very similar mechanisms.)
    |                | C   | C++ | Java | Python |
    | :------------- | :-: | :-: | :--: | :----: |
    | Request dynamic memory |  ?  |  ?  |   ?  |   ?    |
    | Return dynamic memory  |  ?  |  ?  |   ?  |   ?    |

* Video: How do create [memory diagrams](http://vimeo.com/58710057)
* [Pointers and dynamic memory allocation](pointers)
* [Call-by-value vs call-by-reference](parameters) and using `const`.
* Reading: [References vs. pointers](https://isocpp.org/wiki/faq/references)
* Exercise: [Memory allocation](memory)
* Destructor, copy constructor, assignment operator, and move semantics: [The rule of three and the big five](big-five) for classes.

## Templates (a.k.a. Generics)
* [Function and class templates](templates).

## Standard Template Library

Most programming languages come with a library of ready-to-use data structures (abstract data types often called collections) and algorithms to supplement
its primitive data types. Java has the [Java collections framework](https://en.wikipedia.org/wiki/Java_collections_framework) including [`java.util`]. Python has a [standard library](https://docs.python.org/3/library/index.html) built into the language.

C++ has the C++ Standard Template Library (STL).

* Reading: [The C++ Standard Template Library (STL)](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
* Examples: [Arrays vs STL vectors and C-strings vs STL strings.](vector_string)
* [How to compare objects](comparator) (`operator<` and function objects)

## File IO
* [File IO](io)

## Command Line Interface
* [The command line interface (CLI)](cli)

## Recursion
* [Recursion to calculate factorials.](factorial)

## Testing

All code needs tests! 
Ways of testing are described in [HOWTO Test.](../HOWTO_test.md)

Example: [Testing a function to calculate factorials.](factorial)


## License

<img src="https://licensebuttons.net/l/by-sa/3.0/88x31.png" alt="CC BY-SA 4.0" align="left">

All code and documents in this repository are provided under [Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0) License.](https://creativecommons.org/licenses/by-sa/4.0/)