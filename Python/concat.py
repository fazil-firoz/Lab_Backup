cdict_1={1:10,2:20}
dict_2={3:30,4:40}
dict_3={5:50,6:60}
dict_4={}
for d in(dict_1,dict_2,dict_3):dict_4.update(d)
print(dict_4)
