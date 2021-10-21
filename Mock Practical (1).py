#!/usr/bin/env python
# coding: utf-8

# In[30]:


name=input("Enter the name of the person")
designation={"Manager":500,"Team Leader":300,"Team Member":200}
month = { "Jan" : 31 , "feb" : 28 , "march" : 31 , "april" : 30 , "may" : 31 , 
                 "june" : 30 , "july" : 31 , "aug" : 31 , "sept" : 30 , "oct" : 31 , "nov" : 30 , "dec":31}
months=input("Enter the month for which salary is to be stored")
days=int(input("How many days is the employee present? \t"))
if days>month[months]:
        print("Wrong input,there are only",month[months],"days")
        
else:
        
        des=input("Enter the position of the employee")
        salary=designation[des]*days
        print(f"The salary of {name} is {salary}")
        print(f"You have {salary} Rs in your account ")
        net_amount=salary
        f=input("do you want to start transaction?(y,n)")
        if f=='y':
            flag=True
        else:
            flag=False
        while flag==True:
            s = input("enter the amt and operation")
            for values in range(1):
                    values = s.split(" ")
                    operation = values[-1]
                    amount = int(values[0])
                    if operation=="D":
                        net_amount=net_amount+amount
                    elif operation=="W":
                        if(net_amount>=0 and net_amount>amount):
                           net_amount=net_amount-amount
                        else:
                            print("Insufficent,you do not have this amount in your account,Pls try again")
                    else:
                        pass
            print("Your new balance is:",net_amount)
            f=input("do you want to continue?(y,n)")
            if f=='y':
                    flag=True
            else:
                    print("The transaction is now over")
                    flag=False






# In[ ]:





# In[ ]:




