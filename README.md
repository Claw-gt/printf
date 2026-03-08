# 🖨️ ft_printf

> A custom implementation of the standard C `printf` function, developed as part of the 42 School curriculum.

---

## 📖 Description

**ft_printf** is a project from the 42 curriculum that consists of recreating the behavior of the standard C function `printf()`.

The goal is to implement a function capable of formatting and printing data to the standard output while supporting several format specifiers.

This project helps students understand:

* **Variadic functions**
* **Formatted output processing**
* **Type conversions**
* **Memory and string manipulation**

By reimplementing `printf`, the project reinforces a deeper understanding of how formatted output works internally.

---

## 🎯 Project Goal

Create the function:

```c
int ft_printf(const char *format, ...);
```

The function must:

* Print formatted output to **standard output**
* Parse the format string
* Handle the provided format specifiers
* Return the **total number of printed characters**

---

## ⚙️ Supported Format Specifiers

| Specifier | Description                                    |
| --------- | ---------------------------------------------- |
| `%c`      | Prints a single character                      |
| `%s`      | Prints a string                                |
| `%p`      | Prints a pointer address in hexadecimal format |
| `%d`      | Prints a signed decimal integer                |
| `%i`      | Prints a signed integer                        |
| `%u`      | Prints an unsigned decimal integer             |
| `%x`      | Prints a hexadecimal number (lowercase)        |
| `%X`      | Prints a hexadecimal number (uppercase)        |
| `%%`      | Prints the percent symbol                      |

---

## 🧠 Key Concepts

### Variadic Functions

`ft_printf` uses **variadic arguments**, allowing the function to accept a variable number of parameters using:

```c
va_start
va_arg
va_end
```

### Format Parsing

The function reads the format string character by character and detects format specifiers beginning with `%`.

### Type Conversion

Each specifier triggers the appropriate conversion and printing function.


---

## ⚙️ Compilation

Compile the project using:

```bash
make
```

This generates the static library:

```
libftprintf.a
```

---

## 🚀 Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    int len;

    len = ft_printf("Hello %s! Number: %d\n", "world", 42);

    ft_printf("Printed characters: %d\n",
```

---

## 👤 Author

**clagarci**

42 Student

## 📜 License

This project is developed for educational purposes as part of the **42 School** curriculum.
