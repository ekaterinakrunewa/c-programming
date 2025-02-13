n=int(input("n="))
s=str(input("s="))
for i in range(n):
    space=" "*(n-i-1)
    if i==0:
        print(space+s)
    elif i==n-1:
        print(s*(2*n-1))
    else:
        m_spaces=" "*(2*i-1)
        print(space+s+m_spaces+s)