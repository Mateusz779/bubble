

def sort_func(sort=[],repeat=False):

    global size_array
    size_array = 0

    t = True
    j = 0
    le=len(sort)-1

    while (t):
        for i in range(0,le-1):
            if sort[i] > sort[i + 1]:
                sort[i], sort[i + 1] = sort[i + 1], sort[i];
                j = 0;
            elif sort[i] == sort[i + 1] and repeat==False:
                del sort[i]

                size_array=size_array-1
                le=le-1
                j = 0;
            else:
                if (j == le):
                    t = False
                else:
                    j=j+1;
    return sort



def main():

    temp=[2,7,2,1,3,100,3,32,342,2,44,23]
    sorted=sort_func(temp,False)
    for i in sorted:
        print(i)

if __name__ == '__main__':
    main()
    
