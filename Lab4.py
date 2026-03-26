x = int(input("Enter the Number of Tasks"))
Dict = {}
ZeroDep = []
for a in range (x):
    TaskName = input("Enter a Task Name")
    DepNumber = input("Enter the Number of Dependencies")
    if DepNumber == 0:
        ZeroDep.append(TaskName)
    DepName = []
    for n in rane(DepNumber):
        DepName.append(input("Enter Dependencies"))
    Dict[TaskName] = DepName
print(Dict)
print(ZeroDep, "Dont have and Dep")

print("EXECUTİON ORDER")
while Dict:
    for a in Dict:
        if not Dict[a]:
            print(Dict[a])
            for s in Dict:
                if a in Dict[s]:
                    Dict[s].remove(a)
        del Dict[a]

