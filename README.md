
<div align="center">
  <h1>🔢 push_swap ♻️</h1>

  <p><strong>Welcome to my Push Swap project! 🚀</strong></p>
  <p>Crafted with precision at <strong>42 Madrid</strong>, this project is a deep dive into algorithmic thinking, data structures, and optimization. Your mission? Sort a list of integers using only a specific set of stack operations. 🧠</p>
</div>

---

### 🌟 Overview

**Push Swap** is a program written in **C** that receives a list of integers and outputs a series of instructions to sort them using two stacks — `a` and `b` — and a **very limited set of operations**. The goal is not only to sort, but to **do it with the fewest possible operations**.  

This project tests your ability to:
- Work with low-level memory and data structures.
- Implement and optimize custom sorting algorithms.
- Debug and validate user input like a pro.

---

### 🖼️ Visual Example

```
Initial Input: 3 2 1

Stack A: [3] [2] [1]
Stack B: empty

Operations:
  pb      -> push top of A to B
  sa      -> swap top two of A
  pa      -> push top of B to A

Final Stack A: [1] [2] [3] ✅ Sorted!
```

You must simulate the stack behavior using only allowed operations. You cannot use arrays to sort, nor any external sort functions.

---

### ⚙️ How It Works

| **Component**         | **Description**                                                                 |
|-----------------------|---------------------------------------------------------------------------------|
| 📥 Input Validator     | Checks for invalid characters, duplicates, and ensures values are 32-bit ints. |
| 📦 Stack Constructor   | Parses and stores all values in a custom stack data structure.                 |
| 🔁 Operations Engine   | Executes the valid operations (`sa`, `pb`, `ra`, etc.) on stacks `a` and `b`.  |
| 🧠 Sorting Logic       | Chooses the most efficient algorithm depending on the number of elements.      |
| 🛡️ Error Handling      | Ensures graceful handling of all error cases and memory management.            |

---

### 🛠️ Stack Operations

| Operation | Description                                      |
|-----------|--------------------------------------------------|
| `sa`      | Swap top two elements of stack `a`.              |
| `sb`      | Swap top two elements of stack `b`.              |
| `ss`      | `sa` and `sb` at the same time.                  |
| `pa`      | Push top of `b` to `a`.                          |
| `pb`      | Push top of `a` to `b`.                          |
| `ra`      | Rotate stack `a` up (first becomes last).        |
| `rb`      | Rotate stack `b` up.                             |
| `rr`      | `ra` and `rb` simultaneously.                    |
| `rra`     | Reverse rotate stack `a` (last becomes first).   |
| `rrb`     | Reverse rotate stack `b`.                        |
| `rrr`     | `rra` and `rrb` at the same time.                 |

---

### 📂 Example Usage

```bash
$ ./push_swap 5 2 3 1 4
pb
pb
sa
ra
pa
pa
```

You can pipe the output to a checker like this:
```bash
$ ./push_swap 3 2 1 | ./checker 3 2 1
OK
```

---

### 🔎 Testing & Checker

To test your output and see if it really sorts, 42 provides a `checker` program. You can also test operation count like this:

```bash
ARG="3 2 1"; ./push_swap $ARG | wc -l
```

---

### 📈 Performance Goals

| Stack Size | Max Moves Allowed *(Bonus goal)* |
|------------|----------------------------------|
| 100        | <= 700                           |
| 500        | <= 5500                          |

---

<div align="center">
  <p><i>✨ Built at 42 Madrid ✨</i></p>
</div>
