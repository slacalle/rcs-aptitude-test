# Compile the code on my RedHat 4 PC, by  Bob 1 Jun 2003
all:
	gcc -m32 -fPIC -shared -o libfoo.so foo.c
	gcc -m32 -o a.out bar.c -L . -lfoo

clean:
	rm -f libfoo.so a.out
