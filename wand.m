all:main.o schritte.o antwort.o wand
wand.o:main.c
  cc -c schritte.c
schritte.o:schritte.c
  cc -c antwort.c
antwort.o:antwort.c
  cc -c antwort.c
wand:main.o schritte.o antwort.o
  cc -o wand main.o schritte.o antwort.o
