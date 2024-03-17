; a program to add ten numbers without a separate counter
[org 0x0100]

mov bx, 0 ; initialize array index to zero
mov ax, 0 ; initialize sum to zero

l1:
   add ax, [num1+bx] 
   add bx, 2 
   cmp bx, 20 
   jne l1 ; if not add next number

mov [total], ax

mov ax, 0x4c00
int 0x21

num1: dw 10, 20, 30, 40, 50, 10, 20, 30, 40, 50
total: dw 0