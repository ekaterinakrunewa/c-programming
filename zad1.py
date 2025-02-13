s=int(input("s= "))
n=int(input("n= "))
for i in range(n):
    if i==0:
        print(" "*(n-1)+s)
    elif i==n-1:
        print(s*(2*n-1))
    else:
        print(" "*(n-i-1)+s+" "*(2*i-1)+s)