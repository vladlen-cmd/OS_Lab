# Operating Systems Lab Practicals (Session 2024-25)

## Overview
This document outlines the practicals performed in the **Operating Systems (OS) Lab** for the academic session **2024-25**. The primary objective of the lab work was to help me gain hands-on experience in understanding various core concepts of operating systems, such as process management, memory management, scheduling algorithms, file systems, and more.

The following practicals were performed during the session:

## Practicals

### 4. **Process Creation (Parent and Child)**
   - **Objective**: To demonstrate the creation of processes in an operating system using C programming, including the interaction between parent and child processes.
   - **Description**: We wrote a C program to create a parent process that generates a child process using `fork()`, and we observed the behavior of both processes.
   - **Key Concepts**: Process creation, `fork()`, `exec()`, Parent-Child communication.

### 5. **FCFS CPU Scheduling Algorithm**
   - **Objective**: To implement the **First-Come, First-Served (FCFS)** CPU scheduling algorithm.
   - **Description**: A C program was written to simulate the FCFS algorithm, which schedules processes in the order they arrive.
   - **Key Concepts**: Scheduling algorithms, process management.

### 6. **SJF CPU Scheduling Algorithm**
   - **Objective**: To implement the **Shortest Job First (SJF)** CPU scheduling algorithm.
   - **Description**: We created a C program that schedules processes based on their burst times. This algorithm selects the process with the shortest burst time first.
   - **Key Concepts**: CPU Scheduling, Process Scheduling.

### 7. **Priority-based CPU Scheduling Algorithm**
   - **Objective**: To implement the **Priority-based** CPU scheduling algorithm.
   - **Description**: A C program was developed to schedule processes based on their priority levels. The algorithm selects the process with the highest priority (lowest priority number) first.
   - **Key Concepts**: Priority Scheduling, Process Scheduling.

### 8. **Banker's Algorithm for Deadlock Avoidance**
   - **Objective**: To demonstrate **Banker's Algorithm**, which is used to avoid deadlock by ensuring that resources are allocated only if they do not result in an unsafe state.
   - **Description**: We wrote a C program to implement Banker's algorithm for deadlock avoidance. The program checks if the system is in a safe state before allocating resources.
   - **Key Concepts**: Resource Allocation, Deadlock Prevention, Safe State.

### 9. **Basic Shell Commands and Shell Scripts**
   - **Objective**: To implement basic shell commands such as `ls`, `pwd`, `mkdir` using C programming and to demonstrate shell scripting.
   - **Description**: A set of C programs were created to implement basic shell commands. Additionally, we wrote shell scripts to automate tasks like checking conditions with if-else statements, creating directories, and backing up files.
   - **Key Concepts**: Shell Programming, File Management, Scripting.

### 10. **If-Else Conditional in Shell Script**
   - **Objective**: To demonstrate the use of **if-else** conditional statements in shell scripting.
   - **Description**: A simple shell script was written to check if a given number is positive, negative, or zero using if-else statements.
   - **Key Concepts**: Shell Scripting, Conditional Statements, User Input.

## Learning Outcomes
Through the practicals in the OS Lab, we gained insights into:
   - How operating systems manage processes, memory, and CPU scheduling.
   - The concepts of deadlock and deadlock prevention.
   - Implementing core algorithms like FCFS, SJF, and Priority Scheduling.
   - Writing and executing shell commands and shell scripts for system management and automation.
   - Gaining familiarity with basic system programming in C and shell scripting.

## Tools and Technologies Used
   - **Programming Language**: C
   - **Shell**: Bash
   - **Operating System**: Linux/Ubuntu
   - **Compiler**: GCC (GNU Compiler Collection)

## Conclusion
These practicals provided an essential foundation in understanding operating system concepts and their real-world application. The hands-on experience helped develop problem-solving skills and provided a deeper understanding of how an OS manages system resources.

---

**Session**: 2024-25  
**Instructor**: Dr. Princy Diwan  
**University**: Symbiosis Institute of Technology, Nagpur
