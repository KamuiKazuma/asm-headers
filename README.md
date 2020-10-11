# Lisa's x86 fasm Headers

Generic header files for use with x86 assembly language using the [fasm assembler](https://flatassembler.net/).
For the most part these will be geared towards use with DOS.
Descriptions of each file are below.

## ASCII.INC
Contains aliases for ASCII control characters based on their names given in the 1967 ASCII standards,
and a few other aliases including line-endings and serial control characters.

## DOS Files

### EXIT.INC
Provides exit routines for DOS `*.COM` programs.
This header must be included in a `POSTPONE` block.

### STDIO.INC
Provides file attributes, standard I/O handles, and DOS API Standard I/O function IDs.
