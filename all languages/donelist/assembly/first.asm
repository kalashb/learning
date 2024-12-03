section .data
    result_msg db "The sum is: ", 0  ; Output message
    result dd 0                      ; Placeholder for the result
    newline db 10, 0                 ; Newline character

section .bss

section .text
    global _start                   ; Entry point for the program

_start:
    ; Input numbers (hardcoded as 10 and 20 for simplicity)
    mov eax, 10                     ; First number
    mov ebx, 20                     ; Second number

    ; Perform addition
    add eax, ebx                    ; Add the two numbers
    mov [result], eax               ; Store result in memory

    ; Print the result message
    mov eax, 4                      ; System call: sys_write
    mov ebx, 1                      ; File descriptor: stdout
    mov ecx, result_msg             ; Message to print
    mov edx, 12                     ; Length of the message
    int 0x80                        ; Call kernel

    ; Print the result
    mov eax, [result]               ; Load the result
    add eax, '0'                    ; Convert to ASCII
    mov [result], eax               ; Update the memory

    mov ecx, result                 ; Load result for printing
    mov edx, 1                      ; Print one character
    int 0x80                        ; Call kernel

    ; Print newline
    mov eax, 4
    mov ebx, 1
    mov ecx, newline
    mov edx, 1
    int 0x80

    ; Exit the program
    mov eax, 1                      ; System call: sys_exit
    xor ebx, ebx                    ; Return code: 0
    int 0x80                        ; Call kernel


# this is a comment
; this is also a comment, can't do multi line

; compilation and execution: 
; nasm -f elf32 calculator.asm -o calculator.o
; ld -m elf_i386 calculator.o -o calculator
; ./calculator
