# dlopen2
Micro lambda binaries

We are still using flat file databases to store binaries.

Existing object file formats don't express information we need for software safety like what OS calls a binary could make.

glibc/bits/dlfcn.h

glibc/dlfcn

binutils/bfd 

linux https://github.com/torvalds/linux/search?utf8=✓&q=bfd

http://www.sco.com/developers/gabi/2001-04-24/contents.html

Goal 1) Loading "pure" object files with mostly just a memcpy

Goal 2) Loading of object files asking for least side effects neccisary

Goal 3) OS level database of object files. Think AWS Lambda but at the OS level.

Stretch goal) Fixing existing parse errors on object file formats that are security issues.


Refs for ASM level and pure functions to benchmark.

http://download-mirror.savannah.gnu.org/releases/pgubook/ProgrammingGroundUp-1-0-booksize.pdf

https://www.nayuki.io/page/a-fundamental-introduction-to-x86-assembly-programming

http://stackoverflow.com/questions/746171/best-algorithm-for-bit-reversal-from-msb-lsb-to-lsb-msb-in-c
