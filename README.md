# dlopen2
Micro lambda binaries

We are still using flat file databases to store binaries.

Existing object file formats don't express information we need for software safety like what OS calls a binary could make.

glibc/bits/dlfcn.h

glibc/dlfcn

binutils/bfd 

linux https://github.com/torvalds/linux/search?utf8=✓&q=bfd

Goal 1) Loading "pure" object files with mostly just a memcpy

Goal 2) Loading of object files asking for least side effects neccisary

Goal 3) OS level database of object files. Think AWS Lambda but at the OS level.

Stretch goal) Fixing existing parse errors on object file formats that are security issues.
