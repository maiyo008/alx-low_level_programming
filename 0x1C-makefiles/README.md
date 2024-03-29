# 0x1C. C - Makefiles
## Resources
**Read or watch:**

* [Makefile](https://www.google.com/search?q=makefile)
* [Installing the make utility](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
* [make-official documentation](https://www.gnu.org/software/make/manual/html_node/)

### Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

### General
* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## More Info
**Files**
In the following tasks, we are going to use [these files](https://github.com/holbertonschool/0x1B.c). We want to compile these only.

## Tasks
### Task 0. make -f 0-Makefile
<Details>
Create your first Makefile.

Requirements:

* name of the executable: `school`
* rules: `all`
    * The `all`rule builds your executable
* variables: none
</Details>

### Task 1. make -f 1-Makefile
<Details>

Requirements:

* name of the executable: `school`
* rules: `all`
    * The all rule builds your executable
* variables: `CC`, `SRC`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
</Details>


### Task 2. make -f 2-Makefile
<details>

Create your first useful Makefile.

Requirements:

* name of the executable: `school`
* rules: `all`
    * The all rule builds your executable
* variables: `CC`, `SRC`, `OBJ`, `NAME`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o`files
    * `NAME`: the name of the executable
* The `all` rule should recompile only the updated source files
* You are not allowed to have a list of all the `.o` files
</Details>

### Task 3. make -f 3-Makefile
<Details>

Requirements:

* name of the executable: school
* rules: all, clean, oclean, fclean, re
    * all: builds your executable
    * clean: deletes all Emacs and Vim temporary files along with the executable
    * oclean: deletes the object files
    * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM
    * CC: the compiler to be used
    * SRC: the .c files
    * OBJ: the .o files
    * NAME: the name of the executable
    * RM: the program to delete files
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail
* You are not allowed to have a list of all the .o files
</Details>

### Task 4. A complete Makefile
Requirements:

* name of the executable: school
* rules: all, clean, fclean, oclean, re
    * all: builds your executable
    * clean: deletes all Emacs and Vim temporary files along with the executable
    * oclean: deletes the object files
    * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    * re: forces recompilation of all source files
* variables: CC, SRC, OBJ, NAME, RM, CFLAGS
    * CC: the compiler to be used
    * SRC: the .c files
    * OBJ: the .o files
    * NAME: the name of the executable
    * RM: the program to delete files
    * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail

* You are not allowed to have a list of all the .o files