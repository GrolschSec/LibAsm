# LibAsm

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions Implemented](#functions-implemented)

## Introduction

**libasm** is a library written in assembly language that provides implementations for a set of standard C library functions. This project is part of the 42 post-common core curriculum. The purpose of this project is to deepen understanding of low-level programming and the inner workings of these functions.

## Features

- A deeper understanding of assembly language programming and optimization techniques.
- Educational insights into system-level programming.

## Installation

To install **libasm**, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/GrolschSec/LibAsm.git
   ```
2. Navigate into the project directory:
   ```bash
   cd libasm
   ```
3. Compile the library using `make`:
   ```bash
   make
   ```

## Usage

After installation, you can use **libasm** in your projects. To link the library with your code, include the header file and link the compiled library during the compilation of your project:

1. Include the header in your source file:
   ```c
   #include "libasm.h"
   ```
2. Compile your project with the library:
   ```bash
   gcc -o myprogram myprogram.c -L. -lasm
   ```

## Functions Implemented

The following functions are implemented in **libasm**:

- `ft_strlen`: Computes the length of a string.
- `ft_strcpy`: Copies a string from source to destination.
- `ft_strcmp`: Compares two strings.
- `ft_write`: Writes data to a file descriptor.
- `ft_read`: Reads data from a file descriptor.
- `ft_strdup`: Duplicates a string.
