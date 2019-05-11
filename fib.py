def fib(n):
    if n == 1 or n == 2:
        result = 1
    else:
        result = fib(n - 1) + fib(n - 2)
    return result

for i in range(1, 41):
    print("{0}: {1}".format(i, fib(i)))

