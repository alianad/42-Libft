# 42-Libft
Libft is a custom C library containing various utility functions that emulate those in the standard C library. It serves as a foundational library for future projects, providing essential tools and functionalities.

## ⌛ Introduction
This project involves creating a custom C library (libft.a) containing frequently-used standard library functions and additional functions, all with the prefix ft_. 
The library is aimed at providing tools for future C projects, especially when working within environments that limit standard library access.

## ⌛ Installation
To compile and include `libft` in your projects:

1. Clone this repository.
   ```bash
   git clone https://github.com/alianad/42-Libft.git
   cd libft

2. Compile the library.
   ```bash
   make

3. To compile the `bonus` functions, run make bonus. This will add the bonus functions to the library.
   ```bash
   make bonus

4. To clean the object files, run `make clean`.
   ```bash
   make clean

5. To clean both object files and library, run `make fclean`.
   ```bash
   make fclean

## ⌛ Functions
### Libc functions
These functions replicate standard C library functions without relying on any external libraries:

+ `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
+ `ft_atoi`, `ft_toupper`, `ft_tolower`
+ `ft_calloc`, `ft_strdup`, `ft_strlen`, `ft_strchr`, `ft_strrchr`
+ `ft_strlcpy`, `ft_strlcat`, `ft_strncmp`, `ft_strnstr`
+ `ft_bzero`, `ft_memset`, `ft_memcpy`, `ft_memmove` `ft_memchr`, `ft_memcmp`

### Additional Functions
Extra functions for string manipulation and memory management:

+ `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
+ `ft_itoa`, `ft_strmapi`, `ft_striteri`
+ `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Functions
Linked list management functions, implemented as an optional bonus:

+ `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
+ `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## ⌛ Tester
- Supreme Tester Libft : https://github.com/FranFrau/Supreme-Tester-Libft.git
