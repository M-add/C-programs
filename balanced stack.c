#include <stdio.h>
#include <string.h>

// Structure defining Stack data structure
struct Stack {
    int top;
    int array[100];
} st;

/*
Initializes the top index to -1
*/
void initialize() {
 st.top = -1;
}

/*
 Checks if Stack is Full or not
*/
int isFull() {
    if(st.top >= 100-1)
        return 1;
    else
        return 0;
}

/*
 Checks if Stack is Empty or not
*/
int isEmpty() {
 if(st.top == -1)
     return 1;
 else
     return 0;
}
void push(int num)
{
    if (isFull())
        printf("Stack is Full...\n");
    else {
        st.array[st.top + 1] = num;
        st.top++;
    }
}

/*
 Removes top element from stack and decrement top index
*/
int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     st.top = st.top - 1;
        return st.array[st.top+1];
    }
}

int main() {
    char exp[100], c;
    int i, length;
    initialize();
    printf("Enter a string of paranthesis\n");
    scanf("%s",exp);
    length = strlen(exp);
    for(i = 0; i < length; i++){
        if(exp[i] == '{'||exp[i]=='['||exp[i]=='(')
            push(exp[i]);
        else if(exp[i] == '}'||exp[i]==']'||exp[i]==')')
            pop();
        else {
            printf("Error : Invalid Character !! \n");
            return 0;
        }
    }
    if(isEmpty())
        printf("Valid Paranthesis Expression\n");
    else
        printf("InValid Paranthesis Expression\n");

    return 0;
}
