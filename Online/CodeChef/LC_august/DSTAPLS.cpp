


/*
python code  [Accepted Succesfully]
# cook your dish here
T=int(input())
while(T):
    l = map(int,input().split())
    N=0
    K=0
    c=0
    for i in l:
        if(c==0):
           N=i
        else:
            K=i
        c=c+1
    res="NO" if (N%(K*K)==0) else "YES"
    print(res)
    T=T-1
*/