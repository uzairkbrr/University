; a program to add three numbers using byte variables
[org 0x0100]

mov al, [num1] 
mov bl, [num1+1] 

add al, bl 
mov bl, [num1+2] 

add al, bl 
mov [num1+3], al 

mov ax, 0x4c00 ; terminate program
int 0x21


num1: db 5, 10, 15, 0