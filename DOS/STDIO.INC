;
; STDIO.INC
;
; Provides definitions to STDIO values.
;

; File attribute bits:
FA_READONLY	equ 001h	; Read-only
FA_HIDDEN	equ 002h	; Hidden
FA_SYSTEM	equ 004h	; System
FA_VOLLABEL	equ 008h	; Volume label
FA_DIRECTORY	equ 00Fh	; Directory
FA_ARCHIVE	equ 010h	; Archive
FA_UNUSED	equ 040h	; Unused (do not set)
FA_SHAREABLE	equ 080h	; Shareable

FA_MASK 	equ 0BFh	; Mask (all except FA_UNUSED).

; StdI/O handles:
H_STDIN 	equ 00000h	; Standard input
H_STDOUT	equ 00001h	; Standard output
H_STDERR	equ 00002h	; Standard error output

; StdI/O File Function IDs:
STDF_CREATE equ 03Ch    ; Create file
STDF_OPEN   equ 03Dh    ; Open file
STDF_CLOSE  equ 03Eh    ; Close file
STDF_READ   equ 03Fh    ; Read file
STDF_WRITE  equ 040h    ; Write file

; EOF
