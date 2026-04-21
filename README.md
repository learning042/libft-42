_This project has been created as part of the 42 curriculum by tpinto-v._

# Description
Libft is a C library which contains some reimplementations of Standard C library's (libc) functions and also some extra functions. 

## Functions in the library

1. Functions that check characters and character manipulation

It is interesting to know that the implementation from libc can have some bitshiffiting/bitmasking. I let some resource about it in **Resources** section.

Functions | Description | Category
--|--|--
`int	ft_isalpha(int c);` | Checks for alphabetic character. | libc
`int    ft_isdigit(int c);`  | Checks for a digit character('0' through '9'). | libc
`int    ft_isalnum(int c);` | Checks for an alphanumeric character. | libc
`int    ft_isascii(int c);` | Checks if the value fits into the ASCII character set. | libc
`int    ft_isprint(int c);` | Checks for any printable character. | libc
`int    ft_toupper(int c); ` | Convert lowercase letter into uppercase. | libc
`int    ft_tolower(int c);` | Convert uppercase letter into lowercase. | libc

2. String manipulation

Functions | Description | Category
--|--|--
`size_t ft_strlen(const char *s);` | Calculates the length of the string(memory that string occupy excluding the null terminator `'\0'`). | libc
`size_t ft_strlcpy(char *dst, const char *src, size_t size);` | Copies the source string(pointed by **src**) into a destination string( pointed by **dst**) which is limited by size. If the destination buffer isn't large enough to hold the copy, the resulting string will be truncated and null terminated. The return value is the length of the total string that it was tried to create(in this case, the length of src).  | libc
`size_t ft_strlcat(char *dst, const char *src, size_t size);` | Similar to `ft_strlcpy` but it concatenates the source into the destination, instead of copying. | libc
`char   *ft_strchr(const char *s, int c)` | Returns a pointer(the address) of the first occurrence of the character `c` (i.e., it does some type casting to a 1-byte char for checking in the function) in the string s. **Note**: The null terminator character is considered part of the string, so that if `c` is equal to `\0`, the function will return a pointer to the terminator.| libc
`char   *ft_strrchr(const char *s, int c)` | Similar to `ft_strchr` but it returns a pointer to the last occurrence. | libc
`int    ft_strncmp(const char *s1, const char *s2, size_t n);` | It compares the content(not the address) of the first **n bytes** of two strings `s1` and `s2`, the comparison is done with **unsigned characters**.| libc
`char *ft_strnstr(const char *big, const char *little, size_t len);` | Locates the first occurence of the string pointed by **little** in the string pointed by **big**, where not more than **len** characters are searched. | libc
`char   *ft_strdup(const char *s);` | It returns a pointer to the duplicated of the **s** string. The new string is obtained by dynamic allocation with `malloc(3)`, and can be freed with `free(3)`. | libc
`char   *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates memory (using malloc(3)) and returns a substring from the string pointer by **s**. The substring starts at index **start** and has a maximum length of **len**. If the start is greater than the **length** of the string(so, it would be an index after the memory area of the string) it will allocates an empty string and if the **len** is greater than the possible size that the substring can have(i.e., **length of s** - **start**), the function will correct it an only give the possible substring you could have. The return value is the pointer that points to the substring. | extra
`char   *ft_strjoin(char const *s1, char const *s2);` | Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating **s1** and **s2**.  | extra
`char   *ft_strtrim(char const *s1, char const *set);` | The function cut/trim the values from the left and then from the right of it which are in the *set* string and then dynamically allocates memory(malloc(3)) to store a trimmed copy of the string. The return value is the pointer to the first char of in the trimmed string and NULL if the allocation fails. | extra
`char   **ft_split(char const *s, char c);` | Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting **s** using the character **c** as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be NULL terminated | extra 
`char   *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies the function **f** to each character of the string pointed by **s**, passing its  index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of **f**. It returns the allocated string. | extra
`void   ft_striteri(char *s, void (*f)(unsigned int, char*);` | Same of `ft_striteri` but the string pointed by **s**, the data of the mapping is not passed to another string as before(that's why a pointer to a char (`char *s`) instead of a pointer to a constant char (`char const *s`)). | extra

3. Memory manipulation

Functions | Description | Category
--|--|--
`void   *ft_memset(void *s, int c, size_t n);` | It fills the first **n bytes** of the memory area pointer to by **s** with the constant byte **c** (i.e., **c** is converted to unsigned char). | libc
`void    ft_bzero(void *s, size_t n);` | It does the same of `ft_memset` but it just erases the data in the **n bytes** by writting `'\0'` to each byte in the area. | libc
`void   *ft_memcpy(void *dest, const void *src, size_t n);` | Copies **n bytes** from memory area **src** to memory area **dest**. The memory areas must not overlap, if it does overlap you will end up overwritting the content of the src and not copying appropriately(you will copy things that were already overwritten). | libc
`void   *ft_memmove(void *dest, const void *src, size_t n);` | Similar to `ft_memcpy` but it deals with overlapping memory areas by copying from the end of the area to the beginning in such cases, or in libc implementation, copying the bytes in **src** to a temporary array that does not overlap **src** or **dest** and then copying these bytes to **dest**. | libc
`void   *ft_memchr(const void *s, int c, size_t n);` | Searches into the initial **n bytes** of the memory area pointer to by **s** for the first instance of **c**. Both **c** and the bytes of the memory area are interpreted as **unsigned char**. | libc
`int    ft_memcmp(const void *s1, const void *s2, size_t n);` | Compares the first **n bytes**(interpreted as **unsigned char**) of the memory areas **s1** and **s2**. | libc
`void   *ft_calloc(size_t nmemb, size_t size);` | Dynamically allocates memory for an array of **nmemb** elements of **size bytes** each and returns a pointer to the allocated memory. The memory is set to zero. If the multiplication of **nmem** and **size** is zero, then `ft_calloc` will return a unique pointer that can later be successfully passed to `free()`. This implementation handles overflow of the multiplication of **nmemb** and **size** by returning `NULL` in such case. | libc

4. Type conversion functions
Functions | Description | Category
--|--|--
`int    ft_atoi(const char *nptr)` | Converts the string pointerd to by nptr to an int. It stops to convert when find a char that is not a digit char(described in `ft_isdigit`). If the string starts with whitespaces described in `isspace(3)`(links in the **Resources** section) it will skip until find a digit or a sign char (`'+'` or `'-'`). If it finds a sign char it will just consider one instance, if it has another after, it will pause as it was a non-digit char. | libc
`char   *ft_itoa(int n);` | The reverse of `ft_atoi`. Converts an integer **n** to a string, it dynamically allocates memory by using `malloc(3)` for it. | extra

5. File descriptor functions

Functions | Description | Category
--|--|--
`char   ft_putchar_fd(char c, int fd);` | Writes(produce output of) the character **c** to the specified file descriptor **fd**. | extra
`void   ft_putstr_fd(char *s, int fd);` | Writes the string pointer by **s** to the specified file descriptor **fd**. | extra
`void   ft_putendl_fd(char *s, int fd);` | Same of `ft_putstr_fd` but it display a newline right after the string. | extra
`void   ft_putnbr_fd(int n, int fd);` | Writes the integer **n** to the specified file descriptor **fd**. | extra

6. Linked lists

These functions use the list in the form of a struct **t_list** described below in its type-definition: 

`typedef struct s_list {
    void    *content;
    struct s_list   *new;
}   t_list;`

Functions | Description | Category
--|--|--
`t_list *ft_lstnew(void *content);` | Allocates memory (using malloc(3)) and returns a new node. The **content** member variable is initialized with the given parameter **content**. The member variable **next** is initialized to **NULL**. | extra
`void   ft_lstadd_front(t_list **lst, t_list *new);`  | Adds the node **new** at the beginning of the list, where **lst** is a pointer to the pointer that points to the first node. | extra
`int    ft_lstsize(t_list *lst);` | Counts the number of nodes in the list. Where **lst** is a pointer to the first node of the list. | extra
`t_list *ft_lstlast(t_list *lst);` | Returns the address of the last node of the list. Where **lst** is a pointer to the first node of the list. | extra
`void   ft_lstadd_back(t_list **lst, t_list *new)` | Similar to the `ft_lstadd_front` but it adds a new node to the end of the list instead of the beginning. | extra
`void   ft_lstdelone(t_list *lst, void (*del)(void *));` | Takes the address **lst** of a node as parameter and frees its content using the function **del**. Free the node itself(with free(3)) but does **NOT** free the next node. | extra 
`void   ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees the given node and all its successors, using the function **del** and free(3). Finally, set the pointer to the list to NULL. | extra
`void   ft_lstiter(t_list *lst, void (*f)(void *))` | Iterates through the list **lst**(**lst** is the pointer to the first node of the list) and applies the function ’f’ to the content of each node. | extra
`t_list   *ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *));` | Iterates through the list **lst**(**lst** is the pointer to the first node of the list), applies the function **f** to each node’s content, and creates a new list resulting of the successive applications of the function **f**. The **del** function is used to delete the content of a node if needed. | extra


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
- [isspace(3)](https://man.openbsd.org/isspace.3)
