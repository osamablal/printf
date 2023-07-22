# 0x11. C - \_printf

## Description

This repository contains the implementation of a custom `printf` function in the C programming language. The function mimics the standard `printf` function from the C library and provides similar functionality to format and print output to the console.

## Getting Started

To use the custom `printf` function in your C projects, follow these steps:

1. Clone this repository to your local machine using the following command:
   ```
   git clone https://github.com/your-username/printf.git
   ```

2. Include the `holberton.h` header file in your C files where you want to use the custom `printf` function.
   ```c
   #include "holberton.h"
   ```

3. Compile the source files along with your project files.
   ```
   gcc -Wall -Werror -Wextra -pedantic *.c your_file.c -o output
   ```

4. Now, you can use the `\_printf` function in your C code, just like the standard `printf` function.

## Supported Conversion Specifiers

The custom `\_printf` function supports the following conversion specifiers:

- `%c`: Print a single character
- `%s`: Print a string of characters
- `%d` or `%i`: Print an integer in decimal format
- `%u`: Print an unsigned integer
- `%x`: Print an integer in lowercase hexadecimal format
- `%X`: Print an integer in uppercase hexadecimal format
- `%%`: Print a percentage sign

## Example Usage

```c
#include "holberton.h"

int main(void)
{
    char ch = 'H';
    char *str = "Hello, world!";
    int num = 42;
    unsigned int uint = 123456;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Integer: %d\n", num);
    _printf("Unsigned Integer: %u\n", uint);
    _printf("Hexadecimal (lowercase): %x\n", num);
    _printf("Hexadecimal (uppercase): %X\n", num);
    _printf("Percentage sign: %%\n");

    return (0);
}
```

Output:
```
Character: H
String: Hello, world!
Integer: 42
Unsigned Integer: 123456
Hexadecimal (lowercase): 2a
Hexadecimal (uppercase): 2A
Percentage sign: %
```

## Authors

This project was developed by [hammed amusat](https://github.com/mederhoo-script) and [Osama Blal](https://github.com/osamablal) as part of the alxse School curriculum.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

Special thanks to the Alxse School staff for their guidance and support throughout this project.