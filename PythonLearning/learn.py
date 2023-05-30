x = lambda a, b : a * b + 12

print(x(10, 12))
print(type(x))

def func1(n):
    return lambda a, b, c: a*n + b*n + c*n

z1 = func1(5)
print(z1(10, 12, 13))