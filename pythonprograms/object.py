# -*- coding: utf-8 -*-
"""
Created on Sun Jun  2 15:11:15 2019

@author: Pankhuri Trikha
"""

from function import myfun1

s=myfun1(3,4)
print(s)

from function import A

f=A()
f.myfunA()
f.myfun4(25,15)


import time
print("sleep")
time.sleep(3)
print("wokeup")


import numpy
data=numpy.random.randint(5,50,(10,5))
c=['Temperature','pressure','gas','humidity','light']
import pandas
dates=pandas.date_range('20170908',periods=10)
df=pandas.DataFrame(data,index=dates,columns=c)
print(df)