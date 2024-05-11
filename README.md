# UBOS Shell - UNIX Shell and Program Selection Feature

## Overview
This project implements a custom UNIX shell interface in C++ that enables users to execute system commands and access executable programs from the current directory. The shell runs on Debian Linux, using the g++ compiler for building.

## Features
- **Command Execution**: Execute any system command.
- **Background Execution**: Execute commands in the background using `&`.
- **Program Selection Feature**: List and execute programs by selection number from the current directory.

## Building and Running
### Requirements
- g++ compiler
- Debian Linux environment

### Compilation
Compile the shell using the following command:
```bash
g++ -o ubos_shell main.cpp

### Run the shell

./ubos_shell



This documentation is for UBOS Shell version 1.0.
For the demonstration in front of your instructor, follow this detailed script to showcase the capabilities and robustness of your shell.

1. **Introduction**
   - Briefly explain the purpose of the UBOS Shell.
   - Discuss the technologies used (C++, Debian Linux, g++).

2. **Starting the Shell**
   - Open a terminal.
   - Navigate to the directory containing the compiled executable.
   - Launch the shell by typing `./ubos_shell`.

3. **Demonstrating Command Execution**
   - Execute a simple command: `ls`.
   - Show a command with options: `ls -l`.
   - Demonstrate background execution: `sleep 10 &`.

4. **Using the Program Selection Feature**
   - First, show the current directory's executable files using `selection`.
   - Execute one of the displayed programs by typing its corresponding number (e.g., `1`).

5. **Handling Errors**
   - Attempt to execute a non-existent command to show error handling.
   - Try selecting an invalid program number.

6. **Closing the Shell**
   - Exit the shell by typing `exit`.

This demonstration covers essential features and interactions within the shell, illustrating both its functionality and how it handles typical user inputs and scenarios.
