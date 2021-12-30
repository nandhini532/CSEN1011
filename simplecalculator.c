/*
1 Step: START

2 Step: PRINT ENTER YOUR CHOICE.

3 Step: ENTER YOUR CHOICE.

4 Step: ENTER TWO OPERANDS FOR OPERATION.

5 Step: USER WILL ENTER +,-,*,/ .

6 Step: SWITCH(OPERATOR)

7 Step: DO THE OPERATION.

8 Step: PRINT THE RESULT.

9 SteP:STOP*/


// C Program To Make a Simple Calculator Using switch...case
#include <stdio.h>
int main(){
    char ch;
    int a, b, result;
    
    // Asking for Input
    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);
    
    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

/*output
Enter an operator (+,-,*,/):+
Enter two operands:
2
5
Result =7
*/

/*LEARNINGS
learned to make simple calculation using switch case
*/