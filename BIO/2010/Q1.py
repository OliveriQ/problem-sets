# Question 1: Anagram Numbers

def solve():
    n = int(input())
    n_str = str(n)
    n_count = [0] * 10

    for digit in n_str:
        n_count[int(digit)] += 1

    ans = []
    
    for x in range(2, 10):
        m = n * x
        m_str = str(m)
        m_count = [0] * 10

        for digit in m_str:
            m_count[int(digit)] += 1
        
        if (n_count == m_count):
            ans.append(x)

    if len(ans) == 0:
        print("NO")
    else:
        print(*ans)

solve()