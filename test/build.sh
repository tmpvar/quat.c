#!/bin/bash

gcc test/compile.c -o test/a.out -Iinclude -Inode_modules/vec4.c/include -Inode_modules/vec3.c/include
