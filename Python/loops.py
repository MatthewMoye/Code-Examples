for i in range(1, 5):
    print("for loop iteration", i)

num_list = range(1, 5)
for i in num_list:
    print("for loop with list iteration", i)

i = 1
while i < 5:
    print("while loop iteration", i)
    i += 1

# "Do while" for Python
i = 1
while True:
    print("do while loop iteration", i)
    i += 1
    if i > 4:
        break
