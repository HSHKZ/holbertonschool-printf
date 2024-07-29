# _printf Project

This project is a custom implementation of the `printf` function in C, adhering to the Betty coding style and the constraints of the GNU89 standard. It supports basic format specifiers for characters, strings and integers.

## Functionality

The `_printf` function supports the following conversion specifiers:
- `%c`: Print a character.
- `%s`: Print a string.
- `%d` or `%i`: Prints a signed decimal integer.
- `%%`: Prints a percent sign.

## Files

- `main.h`: Header file containing prototypes and include guards.
- `_printf.c`: Implementation of the `_printf` function.
- `_putchar.c`: Implementation of the `_putchar` function.
- `print_numbers.c`: Implementation of functions for printing numbers.
- `print_functions.c`: Implementation of functions for printing characters.
- `README.md`: Description of the project.
- `_printf.3`: File of the man for the function `_printf`. 

## Compilation/Installation

To install the function, just clone the repository:

```sh
git clone https://github.com/HSHKZ/holbertonschool-printf.git
```

and compile the _printf function with this command:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
```

this command will compile all .c files in the current into an executable named printf

## Requirements

- GCC compiler (version 4.8.4 or later).
- Ubuntu 20.04 LTS or similar Unix-like operating system.

## Examples: 

Here are some examples of how to use the _printf function: 

```sh
#include "main.h"

int main(void)

{

    int len;
    int len2;

    len = _printf("Character:[%c]\n", 'L');
    len2 = printf("Character:[%c]\n", 'L');

    len = _printf("String:[%s]\n", "Chaussuuuuuuures !");
    len2 = printf("String:[%s]\n", "Chaussuuuuuuures !");

    len = _printf("Integer:(%%d):[%d]\n", 123);
    len2 = printf("Integer:(%%d):[%d]\n", 123);

    len = _printf("Integer:(%%i):[%i]\n", 123);
    len2 = printf("Integer:(%%i):[%i]\n", 123);

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    len = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);

    return (0);
}
```

## Testing:

To test the _printf function, you can create a test file `main.c` and compile it along with the _printf implementation.
Here is an example of how to compile it and run the test:

1. Create a `main.c` file or change it and include your test cases.
2. Compile the code with the following command: 

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
```

3. Run the compiled program with:

```sh
./printf
```



## Manual Page

To access the manual page,

1.Use this command to install it:

```sh
sudo cp _printf.3 /usr/share/man/man3/
```

2.For activate the page use:

```sh
mandb
```

3.And for open it:

```sh
man _printf.3
```

## AUTHORS

- **Lucas NIEL** - [@Lucas NIEL](https://github.com/HSHKZ)
