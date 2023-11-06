def swap_case(s):
    r=''
    for i in s:
        o=ord(i)
        if o>=97 and o<=122:
            r=r+chr(o-32)
        elif o>=65 and o<=90:
            r=r+chr(o+32)
        else:
            r=r+i
    return r

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
