# Sum_of-n-numbers
A simple C program that calculates the sum of n numbers entered by the user. This beginner-friendly project demonstrates loops, variables, user input, arithmetic operations, and accumulation techniques in C programming. Ideal for students learning iterative programming and basic problem-solving concepts.
# Sum of "n" Numbers in C

A simple C program that calculates the sum of the first **n numbers** entered by the user. This project is ideal for beginners learning loops, variables, user input, and basic arithmetic operations in C.

## 📌 About

This program:

* Accepts a value of **n** from the user.
* Takes **n numbers** as input.
* Calculates their sum.
* Displays the final result.

## 📂 Project Structure

```text
Sum_of_n_Numbers/
├── sum.c
└── README.md
```

## 💻 Sample Code

```c
#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum = %d", sum);

    return 0;
}
```

## 🚀 How to Compile and Run

### Using GCC

Compile the program:

```bash
gcc sum.c -o sum
```

Run the program:

**Linux/macOS**

```bash
./sum
```

**Windows**

```bash
sum.exe
```

## 📤 Sample Output

```text
Enter the number of elements: 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Enter number 5: 50

Sum = 150
```

## 🛠 Requirements

* GCC Compiler or any C Compiler
* Terminal / Command Prompt
* Basic knowledge of C programming

## 📚 Concepts Used

* Variables
* User Input (`scanf`)
* Output (`printf`)
* `for` Loop
* Arithmetic Operations

## 🎯 Learning Objectives

By completing this project, you will learn:

* How to accept multiple inputs from users
* How loops work in C
* How to perform cumulative calculations
* Basic problem-solving using programming

## 🔮 Future Enhancements

* Calculate average of numbers
* Find largest and smallest number
* Support decimal values
* Add input validation

## 📄 License

This project is open-source and available under the MIT License.

---

⭐ If you found this project helpful, consider giving it a star on GitHub!


⭐ If you found this project helpful, consider giving it a star on GitHub!
