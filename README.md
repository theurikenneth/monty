## MONTY DESCRIPTION 
monty interpreter using C programming language
Monty 0.98 is a scripting language that is complied into Monty byte codes.
It relies on a unique stack, with specific instructions to manipulate it.

## Commands

1. push - Pushes an integer onto the stack.
2. pall - Prints all integers on the stack, starting at the top.
3. pint - Prints the integer at the top of the stack.
4. pop - Removes top element of stack.
5. swap - Swaps top two elements of the stack.
6. add - Add top two elements of the stack, remove them, and push result onto stack.
7. sub - Subtract top two elements of the stack, remove them, and push result onto stack.
8. div - Integer divide top two elements of the stack, remove them, and push result onto stack.
9. mul - Multiply top two elements of the stack, remove them, and push result onto stack.
10. mod - Integer division remainder top two elements, remove them, push result onto stack.
11. pchar - Print the ascii character based on top integer in stack.
12. pstr -  Print the ascii characters related to integers in stack until 0 or >255.
13. rotl -  Rotate stack. Top element becomes last. Second from top becomes top.
14. rotr - Rotate stack. Last element becomes top, Top element becomes second from top.
15. stack - Changes mode to first in first out (the default behavior). Front of queue becomes top of stack.
16. queue - Changes mode to last in first out. Top of stack becomes front of queue.
								