#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    i = len(sys.argv) - 1
    print("{} argument".format(i), end="")

    if i == 0:
        print("s.")
    elif i == 0:
        print(":")
    else:
        print("s:")

    if i >= 1:
        i = 0
        for arg in sys.argv:
            if i != 0:
                print("{}: {}".format(i, arg))
            i += 1
