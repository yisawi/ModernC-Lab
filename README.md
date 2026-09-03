# ModernC-Lab

A personal laboratory dedicated to mastering modern C programming.

------------------------------------------------------------------------

## Overview

I am currently working through the book "C Programming: A Modern Approach" 
by K. N. King. This repository serves as a practical log where I implement 
the chapter examples, solve the end-of-chapter exercises, and build the 
required programming projects.

I have a background in Python and Go, but my goal is to pivot toward Embedded Systems Engineering. Also I want to build things from scratch to figure how to be a low level engineer and this lab is where i build a solid foundation in C.

------------------------------------------------------------------------

## Compilation & Toolchain

To ensure code safety, standard compliance, and early detection of undefined 
behavior, all programs are compiled using strict GCC flags under the C11 standard.

### Standard Build Command

```bash
gcc -std=c11 -Wall -Wextra -pedantic -g -o program program.c
```

### Compiler Flags Breakdown

| Flag | Purpose | Description |
| :--- | :--- | :--- |
| `gcc` | Compiler Driver | Calls the GNU Compiler Collection. |
| `-std=c11` | Standard Selection | Enforces adherence to the ISO/IEC 9899:2011 standard. |
| `-Wall` | Core Warnings | Enables a broad baseline of essential compile-time warnings. |
| `-Wextra` | Extended Warnings | Enables additional diagnostic checks not covered by `-Wall`. |
| `-pedantic` | Strict Compliance | Emits warnings for any non-standard language extensions. |
| `-g` | Debugging Symbols | Embeds debug information for tools like GDB and Valgrind. |
| `-o <name>` | Binary Naming | Specifies the final executable output file name. |