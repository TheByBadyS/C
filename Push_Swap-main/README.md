PUSH_SWAP
The purpose of this project is to sort random numbers from smallest to largest according to the rules given to you.

Game Rules

• The game consists of 2 piles named a and b.   

• The stack a consists of a random number of non-replicated negative and/or positive numbers.

• stack b is empty.

• The goal is to sort the numbers in the stack in ascending order on stack a. 

• You can use the following operations to do this:


   sa : swap a -Moves the first 2 elements to the top of stack a. It does nothing if there are one or less elements.
   
   sb : swap b - Moves the first 2 elements to the top of stack b. It does nothing if there are one or less elements.
   
   ss : hr and sb are used at the same time.
   
   pa : push a - places the first topmost element of stack a at the top of stack a. b
     If it's empty it doesn't do anything.
   
   pb : push b - places the topmost element of stack b at the top of stack. If a is empty, it does nothing.
   
   ra : rotate a - moves all the elements of the stack a up by 1 The first element becomes the last element.
   
   rb : rotate b - Moves all elements of the b stack up by 1. The first element becomes the last element.
   
   rr : ra and rb are used at the same time.
   
   rra : reverse rotate a - Moves all the elements of the stack a 1 down. The last element becomes the first element.
   
   rrb : reverse rotate b - Moves all elements of b stack 1 down. The last element becomes the first element.
   
   rrr : rra and rrb are used at the same time.
