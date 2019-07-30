def print_lex_circ(str,len,x):
    lex_circ_strings=set()
    str=str+str
    for i in range(len):
        lex_circ_strings.add(str[i:i+x])
    for i in lex_circ_strings:
        print(i,end="\n")
if __name__=='__main__':
    str="baaaa"
    len_str=len(str)
    x=4
    print_lex_circ(str,len_str,x)
