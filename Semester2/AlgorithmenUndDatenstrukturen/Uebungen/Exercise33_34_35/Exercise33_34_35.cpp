#include "iostream"
#include <vector>
#include <random>

void swap(long& a, long& b) {
    long temp = a;
    a = b;
    b = temp;
}

long insertionSortCompares = 0;
long quickSortCompares = 0;

void PrintCompares(){
    std::cout << "InsertionCompares: " << insertionSortCompares << std::endl;
    std::cout << "QuickSortCompares: " << quickSortCompares << std::endl;
}

long getRandomNumber(long min, long max) {
    std::random_device rd; // Seed generator
    std::mt19937 gen(rd()); // Mersenne Twister engine initialized with the seed
    std::uniform_int_distribution<> dis(min, max); // Uniform distribution for long

    return dis(gen); // Generate and return the random number
}

void PrintArray(std::vector<long> inputArray, long arrayLength)
{
    std::cout << "Printing Array: " << std::endl;

    for (long i=0; i<arrayLength; i++)
    {
        std::cout << inputArray[i] << ", ";
    }
    std::cout << std::endl;
}

long Partition(std::vector<long>& arr, long low, long high) {
    long pivot = arr[high]; // Choose Pivot
    long i = low - 1; // Index where to swap smaller elements

    for (long j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    // Swap Pivot to correct place
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

long PartitionMedian(std::vector<long>& arr, long low, long high) {
    long pivot = arr[(low + high) / 2]; // Choose Pivot
    long i = low - 1; // Index where to swap smaller elements

    for (long j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    // Swap Pivot to correct place
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

long PartitionRandom(std::vector<long>& arr, long low, long high) {
    long pivot = getRandomNumber(0, arr.size() - 1);
    long i = low - 1; // Index where to swap smaller elements

    for (long j = low; j < high; ++j) {
        quickSortCompares++;
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    // Swap Pivot to correct place
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void QuickSort(std::vector<long>& arr, long low, long high) {
    if (low < high) {
        // Partitionierungsindex erhalten
        long pi = Partition(arr, low, high);

        // Rekursiv die Elemente vor und nach der Partition sortieren
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

void InsertionSort(std::vector<long>& arr) {
    long n = arr.size();
    for (long i = 1; i < n; ++i) {
        long key = arr[i];
        long j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
            insertionSortCompares++;
        }
        arr[j + 1] = key;
    }
}

std::vector<long> CreateArray1(){
    std::vector<long> res;
    long value = 2;
    res.push_back(value);
    bool add = false;
    for (long i = 0; i < 999999; ++i)
    {
        if(!add){
            value--;
            add = true;
        }
        else{
            value += 3;
            add = false;
        }
        res.push_back(value);
    }
    return res;
}

std::vector<long> CreateArray2(){
    std::vector<long> res;
    long value = 5;
    for (long i = 0; i < 200000; ++i)
    {
        for (long j = 0; j < 4; ++j)
        {
            res.push_back(value - j);
        }
        value += 5;
    }
    return res;
}

int main()
{
    auto b = CreateArray1();
    std::cout << "Size b: " << b.size() << std::endl;
    QuickSort(b, 0, 999999 );
    PrintCompares();

    return 0;
}


/* Aufgabe 34
 * Quicksort funktioniert aufgrund der rekursiven Aufteilung besser bei großen und unsortierten Datensätzen.
 * Bei kleineren oder zum Teil vorsortierten Datensätzen kann InsertionSort jedoch schneller sein.
 */
