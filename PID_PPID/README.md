# Everything you need to know to start coding your own shell
## PID & PPID
---
A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and systems calls to interact with and manipulate processes. In order to retreive current process ID you can use the system call getpid (man 2 getpid)
|Tasks no |Tasks |
|---------|------|
|Tasks 0  |Write a program that prints the parent process. It is possible to get the PID of the parent process by using the getppid system call|
|Task 1   |Write a program that prints all the arguments without using argc. Compiled using only gcc||Task 2   |Write a program that prints $, wait for the user to enter a command, prints it on the next line|
|Task 3   |Executing a program. System call execve allows a process to execute another program|
|Task 4   |Creating processes using the system call fork|
|Taks 5   |Wait. Wait system call suspends execution of the calling process until one of its children terminates|


