REM gcc build
gcc -c do_add.c -o do_add.o
ld do_add.o -o do_add.a

gcc -c -o use_add.o use_add.c
gcc -o use_add.dll -s -shared use_add.o do_add.a -Wl,--subsystem,windows
gcc -c -o show_add.o show_add.c
gcc -o show_add.exe -s show_add.o -L. -luse_add

.\show_add.exe
