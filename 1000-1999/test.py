def find_sequence(t, test_cases):
    for _ in range(t):
        n, x = test_cases[_]
        a = [1] * n  # Initialize a with 1s
        for i in range(2, n):
            # Find a suitable ai that satisfies x[i] = ai mod ai-1
            for ai in range(1, 10**9 + 1):
                if x[i] % ai == a[i-1]:
                    a[i] = ai
                    break
        print(*a)

t = 2
test_cases = [
    (4, [2, 3, 4, 5]),
    (3, [1, 2, 3])
]

find_sequence(t, test_cases)

