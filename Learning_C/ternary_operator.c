//                                                            gcc mainfile.c -o _mainfile

#include <stdio.h>


/******************* THE MAIN SYNTAX OF TERNARY OPERATOR: 


condition ? expression_if_true : expression_if_false;



********************/

int main() {

   int age;

   printf("Enter your age: ");

   scanf("%d", &age);

   (age >= 18) ? printf("\nYou can vote") : printf("\nYou cannot vote"); 

   return 0;

}


/*
The ternary operator, often referred to as the conditional operator, is a special operator in C and many other programming languages. It provides a concise way to write conditional expressions. The ternary operator takes three operands and evaluates a condition, returning one of two values depending on whether the condition is true or false.

Here is the syntax of the ternary operator in C:

c
Copy code
condition ? expression_if_true : expression_if_false;
condition: A Boolean expression that is evaluated. If it is true (non-zero), the expression before the colon (:) is evaluated. If it is false (zero), the expression after the colon is evaluated.

expression_if_true: The value returned if the condition is true.

expression_if_false: The value returned if the condition is false.

Here's an example of how the ternary operator can be used:

c
Copy code
int x = 10;
int y = 20;
int max = (x > y) ? x : y; // If x > y, assign x to max; otherwise, assign y to max
In this example, the condition (x > y) is evaluated. If it's true, x is assigned to max; otherwise, y is assigned to max. So, in this case, max would be 20 because x is not greater than y.

Advantages of the ternary operator:

Conciseness: It allows you to write simple conditional expressions in a single line, which can make your code more concise and readable.

Avoiding Repetition: It's useful when you need to assign a value to a variable based on a condition without repeating the assignment statement.

Inlining Conditionals: It can be used within larger expressions, making it easy to inline conditionals in complex expressions.

However, it's important to use the ternary operator judiciously. It's best suited for simple, one-line conditional assignments. For more complex conditions or multiple statements, it's often more readable to use a traditional if-else statement.

Here's an equivalent if-else version of the example above:

c
Copy code
int x = 10;
int y = 20;
int max;

if (x > y) {
    max = x;
} else {
    max = y;
}
Both versions achieve the same result, but the choice between them depends on your code's readability and maintainability.
*/
