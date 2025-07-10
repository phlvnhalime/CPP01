# 📦 CPP01 – Memory Allocation, Pointers to Members, References and Switch Statements

Welcome to my repository for **CPP01**, the second module of the C++ curriculum at **42 School**.  
This project dives deeper into **memory management**, **references**, **pointers to member functions**, and **switch statements** using the **C++98 standard**.

---

## 🔍 Overview

This module covers advanced C++ concepts such as:
- **Dynamic Memory Allocation** (`new` / `delete`)
- **Stack vs Heap** allocation strategies
- **References** as an alternative to pointers
- **Pointers to Member Functions**
- **File I/O** and string manipulation
- **Switch Statements** for control flow
- **Memory leak prevention** and proper resource management

The goal is to understand when and how to properly manage memory while building more complex object-oriented applications.

---

## 🛠️ Compilation Rules

- **Compiler:** `c++`
- **Flags:** `-Wall -Wextra -Werror -std=c++98`
- ❌ No external libraries  
- ❌ No C++11 (or later) features  
- ❌ STL usage is **forbidden** until Module 08
- ❌ Forbidden functions: `*printf()`, `*alloc()`, `free()`

---

## 📁 Project Structure

```plaintext
CPP01/
├── ex00/
├── ex01/
├── ex02/
├── ex03/
├── ex04/
├── ex05/
└── ex06/
```

Each folder contains a separate exercise that progressively builds on memory management and advanced C++ concepts.

---

## 📘 Exercises Summary

### 🧟 ex00 – BraiiiiiiinnnzzzZ

**Goal:**  
Create a Zombie class and understand the difference between **stack** and **heap** allocation.

**Key Functions:**
- `Zombie* newZombie(std::string name)` - Creates zombie on heap
- `void randomChump(std::string name)` - Creates zombie on stack

**What I Learned:**
- When to use stack vs heap allocation
- Proper destructor implementation for debugging
- Memory management with `new` and `delete`
- Object lifecycle and scope management

### 🧟‍♂️ ex01 – Moar brainz!

**Goal:**  
Implement `zombieHorde()` function that allocates multiple Zombie objects in a single allocation.

**Key Function:**
```cpp
Zombie* zombieHorde(int N, std::string name);
```

**What I Learned:**
- Array allocation with `new[]` and `delete[]`
- Initializing objects in dynamically allocated arrays
- Memory leak prevention with proper deallocation
- Testing for memory leaks

### 🧠 ex02 – HI THIS IS BRAIN

**Goal:**  
Demonstrate the relationship between **pointers** and **references** through address manipulation.

**Key Concepts:**
- String variable, pointer to string, and reference to string
- Memory address comparison
- Value access through different methods

**What I Learned:**
- References are just another syntax for address manipulation
- Memory address behavior with pointers vs references
- The fundamental similarity between pointers and references

### ⚔️ ex03 – Unnecessary violence

**Goal:**  
Create `Weapon`, `HumanA`, and `HumanB` classes to understand when to use **references vs pointers**.

**Key Design Decisions:**
- `HumanA` takes weapon as **reference** (always armed)
- `HumanB` takes weapon as **pointer** (may not have weapon)

**What I Learned:**
- When to use references vs pointers
- Reference initialization in constructors
- Const reference returns for getters
- Design patterns for optional vs required dependencies

### 📝 ex04 – Sed is for losers

**Goal:**  
Create a file manipulation program that replaces all occurrences of a string in a file.

**Program Usage:**
```bash
./program <filename> <s1> <s2>
```

**What I Learned:**
- File I/O with `std::ifstream` and `std::ofstream`
- String manipulation without using `std::string::replace`
- Error handling for file operations
- C++ approach to file processing vs C functions

### 🗣️ ex05 – Harl 2.0

**Goal:**  
Implement a complaint system using **pointers to member functions** instead of if/else chains.

**Key Features:**
- Four complaint levels: DEBUG, INFO, WARNING, ERROR
- Uses function pointer array for efficient dispatch

**What I Learned:**
- Pointers to member functions syntax and usage
- Function pointer arrays for clean code organization
- Avoiding "forest of if/else" statements
- Clean architecture for extensible systems

### 🔍 ex06 – Harl filter (Optional)

**Goal:**  
Create a filter system using **switch statements** to display messages from a specific level and above.

**Example Output:**
```bash
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free...
[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```

**What I Learned:**
- Switch statement usage and fall-through behavior
- Command-line argument processing
- Hierarchical filtering systems
- Switch vs if/else performance considerations

---

## 💡 Key Concepts Practiced

🧠 **Dynamic Memory Management** - Understanding new/delete lifecycle  
🔗 **References vs Pointers** - When and why to use each  
⚡ **Function Pointers** - Pointers to member functions for clean design  
�� **File I/O** - C++ streams for file manipulation  
🔄 **Switch Statements** - Efficient control flow mechanisms  
🐛 **Memory Leak Prevention** - Proper resource management  

---

## 🎯 Memory Management Best Practices

Based on this module, I learned these essential principles:

**Stack Allocation:**
- Use for objects with known, limited lifetime
- Automatic cleanup when going out of scope
- Faster allocation/deallocation

**Heap Allocation:**
- Use when objects need to outlive current scope
- Manual memory management required
- More flexible but requires careful cleanup

**References vs Pointers:**
- **References:** Use when object always exists and won't change
- **Pointers:** Use when object might not exist or needs to be reassigned

---

## 🚨 Common Pitfalls Avoided

- **Memory Leaks:** Always pair `new` with `delete`, `new[]` with `delete[]`
- **Dangling Pointers:** Don't access memory after deletion
- **Double Deletion:** Don't delete the same memory twice
- **Reference Initialization:** References must be initialized when declared
- **File Handle Leaks:** Properly close files after operations

---

## 📣 Final Notes

This module was crucial for understanding C++ memory management and advanced OOP concepts. The transition from simple classes to complex memory allocation scenarios prepared me for real-world C++ development.

Key takeaways:
- **Memory management is explicit and crucial in C++**
- **References provide safer alternatives to pointers in many cases**
- **Function pointers enable elegant, extensible designs**
- **Switch statements offer clean alternatives to nested conditionals**

💬 *"By Odin, by Thor! Use your brain!!!"* – Understanding when to allocate on stack vs heap is fundamental!

Each exercise builds upon previous concepts while introducing new memory management challenges. Perfect preparation for more advanced C++ modules ahead! 🚀

---

**Author:** Halime Pehlivan.  
**School:** 42 Heilbronn
