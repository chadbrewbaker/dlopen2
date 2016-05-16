clang -O3 -c revcomp.c
clang -O3 -S revcomp.c
clang -O3 -c driver.c
clang -O3 -S driver.c
clang -O3 driver.o revcomp.o 
