# Programming Club

Episodes:

* [s1-e1](https://youtu.be/oFArZXJ65RI)

# What is programming?

We write code to talk to our computers.
We tell the computer what to do.

1. write code in a language
2. compile that code into a language that the computer understands
3. give that program to the computer to run.


Topics

* variables
* statements/expressions
* looping

"mo"

  -------
  | A  |
  -------
  | 2  |
  -------
  | 3  |
  -------
  | 4  |
  -------

array

['A', '2', '3', '4']


Datatypes

* numbers (int, float)
* char -> character [A-Za-z]
* array -> deck of (similar stuff card, number, char)


* Loop

* 1 -> 2
* chore weekly basis:

wash:
1. collect the dirty clothes
2. separate the whites from the colours
3. load the colours into the washing machine
4. add detergent to the washing machine.
5. close the washing machine door/lid
6. start the washing machine

wash clothes week

* week 1: wash
* week 2: wash
* week 3: wash
* week .: wash
* week .: wash
* week .: wash
* week n: wash

rinse and repeat

* `for` loop
* `while` loop

* condition: passing the lie detector test 
* (1 == 1)  -> true
* (0 == 1)  -> false

```c
  for (int i = 0; i < 1000000; i = i + 1) {
    printf("%d\n", i);
  }
```

```c
  while (1 == 1) {
    printf("true\n");
  }
```

# conditions and logic




# polygraphs

* lie detector


question:

Q: Are you 36 years old?
A: no

* FAIL: this is not the truth
  * the exam is over

Q: Are you a male?
A: yes

* PASS: this is the truth
  * continue to ask the next question

* true | false
* yes  | no



Truth tables

* true: 1
* false: 0

AND

| - | - | ------ |
| x | y | result |
| - | - | ------ |
| 0 | 0 | 0      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 1      |

OR

| - | - | ------ |
| x | y | result |
| - | - | ------ |
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |


* functions: behaviour
* structs: data


code + data = programming


allocation a variable -> stack



* pass by value

 x -> clone -> x1

(x1)
 \x1\
  \x1\
   \x1\
    (x1 * 2)
     -

* pass by reference

 `*x`
(x)
 \x\
  \x\
   \ \
    ( )
     -

Workbench

* text editor (vscode, emacs, vim, nano, textmate)
* compiler toolchain
  * GNU: gcc
  * LLVM: clang
* terminal:


# Version Control

- Version (1 - many)
- Control -> navigate -> time travel -> history

# Recursion

The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

```plaintext
  Fn = Fn-1 + Fn-2
  F0 = 0 and F1 = 1
```

Problem:

Given a number n, print n-th Fibonacci Number.
