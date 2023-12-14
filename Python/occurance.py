string=input("enter the string:")
if len(string)<2:
    print("the length is very short")
else:
    fchar=string[0]
nstring=fchar+string[1:].replace(fchar,'$')
print("new string:",nstring)
