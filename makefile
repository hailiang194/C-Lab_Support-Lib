output: test.o characterIO.o stringIO.o integerIO.o line.o lines.o readlines.o
	g++ test.o characterIO.o stringIO.o integerIO.o line.o lines.o readlines.o -o ex

test.o: test.cpp
	g++ -c test.cpp

characterIO.o: CLabIO/char-string/characterIO.h CLabIO/char-string/characterIO.c
	g++ -c CLabIO/char-string/characterIO.c 

stringIO.o: CLabIO/char-string/stringIO.h CLabIO/char-string/stringIO.c
	g++ -c CLabIO/char-string/stringIO.c

integerIO.o: CLabIO/integer/integerIO.h CLabIO/integer/integerIO.c
	g++ -c CLabIO/integer/integerIO.c


line.o: CLabFileStream/ReadLines/c/line.h CLabFileStream/ReadLines/c/line.c
	g++ -c CLabFileStream/ReadLines/c/line.c

lines.o: CLabFileStream/ReadLines/c/lines.h CLabFileStream/ReadLines/c/lines.c
	g++ -c CLabFileStream/ReadLines/c/lines.c

readlines.o: CLabFileStream/ReadLines/cpp/readlines.hpp CLabFileStream/ReadLines/cpp/readlines.cpp
	g++ -c CLabFileStream/ReadLines/cpp/readlines.cpp

clean: test.o characterIO.o stringIO.o integerIO.o line.o lines.o readlines.o
	rm test.o characterIO.o stringIO.o integerIO.o line.o lines.o readlines.o
