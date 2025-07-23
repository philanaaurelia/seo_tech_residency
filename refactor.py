def processData(x):
    r = []
    for i in x:
        if i % 2 == 0:
            r.append(i * 2)
        else:
            r.append(i + 1)
    return r

def userInfo():
    n = input("Enter name: ")
    a = int(input("Enter age: "))
    if a > 17:
        print("You are an adult, " + n)
    else:
        print("Hi " + n + ", you're still a minor.")

def mainFunc():
    l = [1,2,3,4,5,6,7,8,9]
    newL = processData(l)
    print("Processed list is:")
    for i in newL:
        print(i)
    userInfo()

mainFunc()
