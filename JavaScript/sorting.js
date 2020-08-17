function valueSwap(ar, pos1, pos2) {
    let temp = ar[pos1]
    ar[pos1] = ar[pos2]
    ar[pos2] = temp
}

function bubbleSort(ar, size) {
    console.log(ar.toString())
    let i, j
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (ar[j] > ar[j + 1]) {
                valueSwap(ar, j, j + 1)
                console.log(ar.toString())
            }
}

function insertionSort(ar, size) {
    console.log(ar.toString())
    let i, j, value = 0
    for (i = 1; i < size; i++) {
        value = ar[i]
        j = i - 1
        while (j > -1 && ar[j] > value) {
            ar[j + 1] = ar[j]
            j--
        }
        ar[j + 1] = value
        console.log(ar.toString())
    }
}

function selectionSort(ar, size) {
    console.log(ar.toString())
    let i, j, small
    for (i = 0; i < size - 1; i++) {
        small = i
        for (j = i + 1; j < size; j++) {
            if (ar[j] < ar[small])
                small = j
        }
        valueSwap(ar, small, i)
        console.log(ar.toString())
    }
}

let ar1 = [6, 5, 1, 4, 3, 2],
    ar2 = [6, 5, 1, 4, 3, 2],
    ar3 = [6, 5, 1, 4, 3, 2]
console.log("Bubble Sort")
bubbleSort(ar1, ar1.length)
console.log("\nInsertion Sort")
insertionSort(ar2, ar2.length)
console.log("\nSelection Sort")
selectionSort(ar3, ar3.length)