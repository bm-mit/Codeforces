#* 239516263	Dec/29/2023 23:24UTC+7	Minh4893IT	C - Can I Square?	PyPy 3-64	Accepted	405 ms	51900 KB

t = int(input())

for _ in range(t):
    n = int(input())
    
    s = sum(int(i) for i in input().split())

    print("YES" if s**0.5 == int(s**0.5) else "NO")