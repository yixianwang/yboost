# CC = nvcc 
# FLAG = -arch=sm_75
CC = g++ 
FLAG = -std=c++20 -Wall

SRCS1 = ./src/kmeans.cc
SRCS2 = ./src/kernel.cu
SRCS3 = ./src/argparse.cc
SRCS4 = ./src/io.cc

EXEC1 = bin/kmeans.o
EXEC2 = bin/kernel.o
EXEC3 = bin/argparse.o
EXEC4 = bin/io.o

EXEC = bin/kmeans

all: clean compile

compile:
	$(CC) $(FLAG) -o $(EXEC3) -c $(SRCS3)
	$(CC) $(FLAG) -o $(EXEC4) -c $(SRCS4)
	$(CC) $(FLAG) -o $(EXEC1) -c $(SRCS1)
	$(CC) $(FLAG) -o $(EXEC) $(EXEC1) $(EXEC3) $(EXEC4) 

# $(CC) $(FLAG) -o $(EXEC2) -c $(SRCS2)
# $(CC) $(FLAG) -o $(EXEC) $(EXEC1) $(EXEC2) $(EXEC3) $(EXEC4) 

clean:
	rm -f $(EXEC1) $(EXEC2) $(EXEC3) $(EXEC4) $(EXEC)

INPUTFILE0 = ./input/random-n2048-d16-c16.txt 
INPUTFILE1 = ./input/random-n16384-d24-c16.txt 
INPUTFILE2 = ./input/random-n65536-d32-c16.txt 

THRESHOLD = 1e-6
C = -c

# test for input_size with 2048
run0:
# ./bin/kmeans -k 16 -d 16 -i $(INPUTFILE0) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 0 
# ./bin/kmeans -k 16 -d 16 -i $(INPUTFILE0) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 1 
# ./bin/kmeans -k 16 -d 16 -i $(INPUTFILE0) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 2 
	./bin/kmeans -k 16 -d 16 -i $(INPUTFILE0) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 3 

# test for input_size with 16384
run1:
	./bin/kmeans -k 16 -d 24 -i $(INPUTFILE1) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 0 
	./bin/kmeans -k 16 -d 24 -i $(INPUTFILE1) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 1 
	./bin/kmeans -k 16 -d 24 -i $(INPUTFILE1) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 2 
	./bin/kmeans -k 16 -d 24 -i $(INPUTFILE1) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 3 

# test for input_size with 65536
run2:
	./bin/kmeans -k 16 -d 32 -i $(INPUTFILE2) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 0 
	./bin/kmeans -k 16 -d 32 -i $(INPUTFILE2) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 1 
	./bin/kmeans -k 16 -d 32 -i $(INPUTFILE2) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 2 
	./bin/kmeans -k 16 -d 32 -i $(INPUTFILE2) -m 150 -t $(THRESHOLD) -s 8675309 $(C) -p 3 
