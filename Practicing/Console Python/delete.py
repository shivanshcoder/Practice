#file1 = open("following.txt","",encoding='utf-8')
#file2 = open("followers.txt","r",encoding='utf-8')
f = open("followers.txt","r+",encoding='utf-8')
d = f.readlines()
f.seek(0)
j=2
for i in d:
    if j%3==0:
        f.write(i)
    j+=1

f.truncate()
f.close()
