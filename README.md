# FDS-Practical-SE31
n=int(input("enter number of students \t"))
s=[]
for i in range(n):
    marks=int(input(f"enter marks of {i+1}\t"))
    s.append(marks)
print("the list of marks of student is ",s)
def average(num):
    sumnum = 0
    count=0
    for i in num:
        sumnum =i+sumnum  
        count=count+1

    avg = sumnum / count
    return avg
def max():
         max_value = None
         if i !=-999:
              for num in s:
                 if (max_value is None or num > max_value):
                    max_value = num
         print('The max marks is:', max_value)
def min():
         mini = s[0]
         for i in range(len(s)):
                if s[i] < mini:
                    mini = s[i] 
         print("The least marks is ",mini)

def f():
        max = 0
        res = s[0]
        count=0
    
        for i in s:
            for j in range(1,len(s)):
                if (s[j] == s[j - 1]):
                    count=count+1
                    if count> max:
                        max = count
                        res = s[j-1]
            return res
            
    

def absent():
            
            ab=0
            for i in s:
                if i ==-999:
                     ab=ab+1
                else:
                    pass
                    
            print("The number of absent students are",ab)
     
            
avg=average(s)
print("the average of students is",avg)
max()
min()
print("The most frequent marks is",f())
absent()
