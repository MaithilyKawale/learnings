def greatest(a,b,c)->int:
    if a>b and a>c:
        print(a, "is greater")
        return a
    elif b>a and b>c:
        print(b,"is greater")
        return b
    else:
        print(c,"is greater")
        return c


def main():
    a=int(input("enter any num:"))
    b = int(input("enter any num:"))
    c = int(input("enter any num:"))
    grt=greatest(a,b,c)
    print(grt)

main()