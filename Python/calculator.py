import re
print("Our Magical Calculator")
print("Type 'quit' to exit")
previous = 0
run = True


def performMath():
    global run
    global previous
    equation = input("Enter equation: ")
    if equation == 'quit':
        run = False
    else:
        equation = re.sub(' [a-zA-Z,.:()" "]', '', equation)
        if previous == 0:
            previous = eval(equation)
        else:
            previous = eval(str(previous)+equation)
        print('Answer: ', previous)


while run:
    performMath()
