Use `gcc -E $CFILE -o c` to run a preprocessor and save the result in a file called `c`

Use `gcc -c $CFILE` to compile a c file but does not link it

Use `gcc $CFILE -S` to generate an assembly code 

Use `gcc $CFILE -o cisfun` to create an executable file with the name `cisfun`

Use `gcc -S -masm=intel $CFILE` generate an assembly code with intel syntax of a C code
