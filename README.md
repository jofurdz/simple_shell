![screenshot of shell in action](https://user-images.githubusercontent.com/63303265/182445549-cb4eb826-ec5c-4d7c-a774-c9cbea8be1dc.png)

[Tyler McClure's Linkedin](https://www.linkedin.com/in/tyler-mcclure-2011b21a9/)

[Tyler McClure's Portfolio Project](https://github.com/Scatmandu/portfolio_project)

**About (one of) the authors and our experience with this project**

This project was essentially our final for our first trimester of Holberton. Our goal was to
implement a shell using C with basic functionality including fetching and printing the ENV
and ls. We could have implemented many more features (cd being the big one and kind of a white
whale for this project) but even the most bare-bones implementation was quite the undertaking.
The most difficult aspect of this project was probably getting our tokenizing function to
work, which is basically the lynchpin of the entire operation. It not only processes our 
commands but is also how we parse and display our ENV function. A funny side note about this
project: I will always remember it because I was hit by a car on my bicycle while working on
it, resulting in quite the injury. However I don't view this as too terribly negative, as
like I said, I will never forget it hehe.


**Simple Shell**

This simple shell project is for Holberton students that are ending their first semester. After completion of project students should understand how to create a basic shell program.

**Installation**

```bash
git clone https://github.com/jofurdz/simple_shell
```

**Compilation**

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

**Files & Functions**

- Authors - contains the authors of the project
- builtins.c - contains builtins for the shell

* sh_exit - exits the shell
* sh_env - prints env

- dir.c - function to navigate directories and executables

* dir - function for navigating directories
* exe_maker - creates the executable
* execute - executes the executable

- functionfinder.c - matches arguments to our builtins

* function_finder - structure to find builtin functions

- str_functions.c - string functions that help other functions run

* \_puts - prints a string
* \_strdup - returns a pointer to a newly allocated space in memory
* \_strcmp - compares two strings
* \_str_concat - concatenates strings
* everything_free - frees arrays of pointers

- str_functions_2.c - more strings functions

* \_putchar - puts character
* \_strlen - measures the length of a string

- shell.c - shell loop

* main - uses all functions within an infinite loop to create a simple shell

- shell.h - prototypes and structures for functions
- path.c - functions to get and parse the environment

* \_getenv - gets the path from the environment
* env_parser - tokenizes the path

**Bugs**

No known bugs, please report any bugs you may find. Not all edge cases have been tested.

**Authors**

- Nikki Jo Ford: [Github](https://github.com/jofurdz)
- Tyler Mclure: [Github](https://github.com/Scatmandu)

**Additional Contributors**

- Special thanks to our studors Garrison and Peyton as well as Lyndon Pettersson, Tommy Kim, Tres Serio and Nick Wallace!
