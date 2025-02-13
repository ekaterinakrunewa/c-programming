help.out: main.c
	gcc -o help.out main.c

clean:
	rm -f help.out