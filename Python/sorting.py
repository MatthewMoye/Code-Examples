def value_swap(ar, pos1, pos2):
    temp = ar[pos1]
    ar[pos1] = ar[pos2]
    ar[pos2] = temp


def bubbleSort(ar, size):
    print(ar)
    for i in range(0, size - 1):
        for j in range(0, size - i - 1):
            if ar[j] > ar[j + 1]:
                value_swap(ar, j, j + 1)
                print(ar)


def insertionSort(ar, size):
    print(ar)
    for i in range(1, size):
        value = ar[i]
        j = i - 1
        while j > -1 and ar[j] > value:
            ar[j + 1] = ar[j]
            j -= 1
        ar[j + 1] = value
        print(ar)


def selectionSort(ar, size):
    print(ar)
    small = 0
    for i in range(0, size - 1):
        small = i
        for j in range(i + 1, size):
            if ar[j] < ar[small]:
                small = j
        value_swap(ar, small, i)
        print(ar)


ar1 = [6, 5, 1, 4, 3, 2]
ar2 = [6, 5, 1, 4, 3, 2]
ar3 = [6, 5, 1, 4, 3, 2]
print("Bubble Sort")
bubbleSort(ar1, len(ar1))
print("\nInsertion Sort")
insertionSort(ar2, len(ar2))
print("\nSelection Sort")
selectionSort(ar3, len(ar3))
