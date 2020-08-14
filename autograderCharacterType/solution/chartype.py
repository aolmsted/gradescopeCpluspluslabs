instr = input("Enter a character: ")
if instr.isdigit():
    print("{0} is a digit.".format(instr))
elif instr.islower():
    print("{0} is a lower case letter.".format(instr))
elif instr.isupper():
    print("{0} is an upper case letter.".format(instr))
else:
    print("{0} is a non-alphanumeric character.".format(instr))
    
