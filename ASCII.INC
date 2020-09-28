;
; ASCII.INC
;
; Defines ASCII Code Abbreviations
;

; Using 1967 abbreviations

NUL EQU 0   ; Null
SOH EQU 1   ; Start of Heading
STX EQU 2   ; Start of Text
ETX EQU 3   ; End of Text
EOT EQU 4   ; End of Transmission
ENQ EQU 5   ; Enquiry
ACK EQU 6   ; Acknowledgement
BEL EQU 7   ; Bell
BS  EQU 8   ; Backspace
HT  EQU 9   ; Horizontal Tab
LF  EQU 10  ; Line Feed
VT  EQU 11  ; Vertical Tab
FF  EQU 12  ; Form Feed
CR  EQU 13  ; Carriage Return
SO  EQU 14  ; Shift Out
SI  EQU 15  ; Shift In
DLE EQU 16  ; Date Link Escape
DC1 EQU 17  ; Device Control 1
DC2 EQU 18  ; Device Control 2
DC3 EQU 19  ; Device Control 3
DC4 EQU 20  ; Device Control 4
NAK EQU 21  ; Negative Acknowledgement
SYN EQU 22  ; Synchronous Idle
ETB EQU 23  ; End of Transmission Block
CAN EQU 24  ; Cancel
EM  EQU 25  ; End of Medium
SUB EQU 26  ; Substitute
ESC EQU 27  ; Escape
FS  EQU 28  ; File Separator
GS  EQU 29  ; Group Separator
RS  EQU 30  ; Record Separator
US  EQU 31  ; Unit Separator
DEL EQU 127 ; Delete

; Common aliases:
CRLF EQU 00D0Ah ; CRLF (DOS/Windows End-of-Line)

; Serial control:
XON EQU DC1
XOFF EQU DC3

; EOF
