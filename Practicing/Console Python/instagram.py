file1 = open("following.txt","r+",encoding='utf-8')
flag=False
i=0
j=0
for item1 in file1:
    i+=1


    file2 = open("followers.txt","r+",encoding='utf-8')
    for item2 in file2:
        #
        # print(item2)
        #print(item1,item2)
        #if item1==item2:
            #flag=True
        j+=1

    #if flag == False:
        print(i,j)

        #print(i)




