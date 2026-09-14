PROGRAM_NAME = main.out
STATIC_LIB   = libstatistics.a
OUTPUT_ARRAY_LIB = liboutput_array.a

all: $(STATIC_LIB) $(OUTPUT_ARRAY_LIB) $(PROGRAM_NAME)

$(STATIC_LIB): statistics.c
	gcc -Wall -c statistics.c -o statistics.o
	ar rcs libstatistics.a statistics.o

$(OUTPUT_ARRAY_LIB): output_array.c $(STATIC_LIB)
	gcc -Wall -c output_array.c -o output_array.o
	ar rcs liboutput_array.a output_array.o

$(PROGRAM_NAME): main.c $(OUTPUT_ARRAY_LIB) $(STATIC_LIB)
	gcc -Wall main.c -o $(PROGRAM_NAME) -L. -loutput_array -lstatistics -lm

run: all
	./$(PROGRAM_NAME)

clean:
	rm -f $(PROGRAM_NAME) $(STATIC_LIB) *.o

