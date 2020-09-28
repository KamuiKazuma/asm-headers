;
; EXIT.INC
;
; Provides an exit routine.
;

; exit[.normal]:
; Exits using the normal MS-DOS call to Int 21h at AH=4Ch. The value
; in AL will be returned to the OS as an exit code.

; exit.noCode:
; Exits using the COM file exit at Int 20h. This only works with COM
; files, and error codes are unsupported. This will be called if a
; call to exit.normal fails.

; exit.good:
; Sets the value of AL to 0, and jumps to exit.normal. Effectively
; this returns a good exit code.

exit:
    .normal:            ; Exit using MS-DOS call (AH=04CH)
        mov     ah, 04Ch
        int     021h
    .noCode:            ; Exit using old method (no error codes, COM files only).
        int     020h
    .good:              ; Exit using MS-DOS call with good exit code.
        mov     al, 000h
        jmp     exit

; EOF
