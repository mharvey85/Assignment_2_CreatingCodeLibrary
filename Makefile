PROGRAM_NAME     = main.out
LIB_STATISTICS   = lib/libstatistics.a
LIB_OUTPUT_ARRAY = lib/liboutput_array.a

all: $(STATIC_LIB) $(OUTPUT_ARRAY_LIB) $(PROGRAM_NAME)

$(LIB_STATISTICS): src/statistics.c
	mkdir -p build lib
	gcc -Wall -Iinclude -c src/statistics.c -o build/statistics.o
	ar rcs lib/libstatistics.a build/statistics.o

$(LIB_OUTPUT_ARRAY): src/output_array.c $(LIB_STATISTICS)
	mkdir -p build lib
	gcc -Wall -Iinclude -c src/output_array.c -o build/output_array.o
	ar rcs lib/liboutput_array.a build/output_array.o

$(PROGRAM_NAME): src/main.c $(LIB_STATISTICS) $(LIB_OUTPUT_ARRAY)
	gcc -Wall -Iinclude src/main.c -o $(PROGRAM_NAME) -Llib -loutput_array -lstatistics -lm

run: all
	./$(PROGRAM_NAME)

clean:
	rm -f $(PROGRAM_NAME)
	rm -rf build lib

