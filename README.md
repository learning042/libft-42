_This project has been created as part of the 42 curriculum by tpinto-v._

# Description
Libft is a C library which contains some standard libc functions and also some extra functions.

# Instructions 

## Makefile

Commands | Side-effect
--|--
`make` `make all` | Compile all the object files and then archive them into the library libft.a (i.e., build the library)
`make clean` | Remove all the object files
`make fclean` | Remove the library libft.a and all the object files
`make re` | Rebuild the library (i.e., run `clean` and then `all`)

## How to use the library ?

1. Use `make` in order to build the library as specified previously.
2. Don't forget to have a `.c` file with a `main() function`.
3. Include libft header by doing `#include "libft.h"` into your `.c` file.
4. Compile the `.c` by using `cc [name of the .c file] -I[path where the libft.h is] -L[path where the libft.a is] -lft`
5. Execute the executable by doing `./a.out`.

# Resources

Some helpful resources about the libc functions:

- The documentation for each function can be accessed via the terminal using man [function_name] (e.g., man strcmp), or through the [FreeBSD man pages](https://man.freebsd.org/cgi/man.cgi) (which are sometimes more detailed and better explained).
- The [Geekforgeeks](https://www.geeksforgeeks.org) website has many tutorials for learning C, other programming languages and many other computing topics.
- [Cs50x](https://cs50.harvard.edu/x/), a course for learning many C and programming concepts.



