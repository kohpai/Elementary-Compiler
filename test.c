

a = 10;
b = 1;

if (b) { \
    a = 5 * 6; \
    a = a - b; \
    print("hello, world!"); \
}

if (b - 1) { \
    a = b; \
}

loop (1 -> 10, 2) { \
    b = b + 1; \
    a = a + b; \
}

print(b);
print(a-b);
