### DSA Using C 🚀

This repository contains my **day-by-day learning of Data Structures and Algorithms (DSA) using the C programming language**.  
The focus is on **strong fundamentals, clear logic, and understanding time complexity** with practical C programs.

---

## 📚 What This Repository Is About

- Learning DSA from **Day 1**
- Writing clean and simple **C programs**
- Understanding **time complexity (Big-O notation)**
- Building consistency by uploading code daily
- Preparing a strong foundation for placements and interviews

---

## 📅 Day 1 – Introduction to DSA & Time Complexity

### 🔹 Topics Covered
- What is Data Structure
- What is Algorithm
- Why Time Complexity is important
- Big-O Notation
- Constant, Linear, and Quadratic Time Complexity

---

## ⏱️ Time Complexity Programs

### ✅ O(1) – Constant Time
Execution time does **not depend on input size**.

**File:** `constant_time.c`

### ✅ O(n) – Linear Time Complexity
Execution time **increases linearly** with the size of the input.

If the input size grows, the number of operations grows in the same proportion.

#### 📂 Files
- `Linear_time.c`
- `Maximum_element.c`
- `Count_elements.c`

#### 🔍 Examples Covered
- Iterating through all elements of an array
- Finding the maximum element in an array
- Counting the number of elements in an array

### ✅ O(n²) – Quadratic Time Complexity
Execution time **increases quadratically** with the size of the input.

This type of time complexity usually occurs when **nested loops** are used.

#### 📂 File
- `Quadratic_time.c`

#### 🔍 Explanation
For an input of size `n`, the inner loop runs `n` times for each iteration of the outer loop.  
Total operations ≈ `n × n`.

## 🧪 Programs Included (Day 1)

| File Name            | Time Complexity | Description |
|----------------------|----------------|-------------|
| `constant_time.c`    | O(1)           | Prints a value (constant time execution) |
| `Linear_time.c`      | O(n)           | Loop iterating through elements |
| `Maximum_element.c`  | O(n)           | Finds maximum element in an array |
| `Count_elements.c`   | O(n)           | Counts number of elements in an array |
| `Quadratic_time.c`   | O(n²)          | Nested loop example |.

---
# 📘 Day 2 – Arrays & Pointers in C

## 📌 Topics Covered
- Array traversal
- Counting elements in an array
- Sum of array elements
- Introduction to pointers
- arr,&arr,&arr[0]
- Finding maximum element using pointers
- Finding minimum element using pointers
- sum of array element using pointers
- Address of array element using pointers
- Reversing an array using pointers
- Understanding `arr`, `&arr`, and `&arr[0]` 
- Time Complexity analysis

---

## 🧪 Programs Included (Day 2)

| File Name                     | Time Complexity | Description |
|------------------------------|----------------|-------------|
| `print_array.c`              | O(n)           | Prints all elements of an array |
| `count_elements.c`           | O(n)           | Counts number of elements in an array |
| `pointer_basic.c`            | O(1)           | Prints value and address using pointer |
| `array_using_pointer.c`      | O(n)           | Prints array elements using pointer arithmetic |
| `sum_of_array.c`             | O(n)           | Calculates sum of array elements |
| `print arr_&arr_&arr[0].c`      | O(1)           | Prints arr,&arr,&arr[0] using pointer |
| `max_element_pointer.c`      | O(n)           | Finds maximum element using pointer |
| `reverse_array_pointer.c`    | O(n)           | Prints array in reverse using pointers |
| `arr_address_demo.c`         | O(1)           | Demonstrates `arr`, `&arr`, and `&arr[0]` |
| `sum_array_pointer.c`       | O(n)            | Calculates the sum of array elements using pointer |
| `min_array_pointer.c`       | O(n)            | Finds the minimum element in an array using pointer |
| `array_addresses_pointer.c`   | O(n)            | Prints the memory addresses of array elements     |

---

# 📅 Day 3 – Dynamic Memory Allocation in C
### 📌 Topics Covered
- Difference between static and dynamic memory
- Heap memory vs Stack memory
- Dynamic memory allocation
-malloc() function
- calloc() function
- realloc() function
- free() function
- Handling NULL pointer
- Memory leak prevention

---
### 🧪 Programs Practiced
| File Name                  | Time Complexity | Description                                      |
|---------------------------|-----------------|--------------------------------------------------|
| `malloc_array.c`     | O(n)            |Allocates memory using malloc and print array  elements |
| `calloc_sum.c`     | O(n)            | Allocates memory using calloc and finds sum of elements |
| `realloc_array.c` | O(n)            | Resizes array using realloc and prints updated elements |

---

# 📅 Day 5 – Introduction to Linked List (Using C)

Today I implemented my first **Singly Linked List** programs using C.

This marks the beginning of learning dynamic data structures in DSA.

---

## 📚 Topics Covered

- What is a Linked List?
- Why we use `struct` in C
- Why `struct node *next` is used
- Dynamic memory allocation using `malloc()`
- Traversing a linked list
- Counting number of nodes

---
| File Name                  | Time Complexity | Description                                      |
|---------------------------|-----------------|--------------------------------------------------|
| `created_linked_list.c`     | O(n)            |Creates and prints a singly linked list |
| `count_nodes.c`     | O(n)            | Counts the number of nodes in a linked list |

---

## 🧠 Key Concepts Learned

### 🔹 Pointer vs Value
- `a + i` → gives **address**
- `*(a + i)` → gives **value at that address**

### 🔹 Why `%p` is used
- `%p` is used to print **memory addresses**
- Always used with pointers
  
## 🛠️ Language Used
- **C Programming Language**

---

## 🎯 Learning Objective
- Build a strong foundation in Data Structures and Algorithms
- Understand how algorithm performance scales using Big-O notation
- Improve logical thinking and problem-solving skills using C
- Strong understanding of array
- Clear concept of pointers and dereferencing
- Confidence in pointer arithmetic 
- Ability to analyse time complexity of simple program
---

## 📌 Notes
- Each program is written with beginner-friendly logic
- Time complexity is analyzed for every example
- This repository follows a **day-by-day learning approach**

---

⭐ This repository will be updated regularly as I continue learning DSA step by step.

