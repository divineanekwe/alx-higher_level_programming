#!/usr/bin/python3
caps = 0
for i in range(122, 96, -1):
    if caps == 0:
        print("{}".format(chr(i)), end="")
        caps = 1
    else:
        print("{}".format(chr(i - 32)), end="")
        caps = 0
