#include "iostream"

void Swap(int* inputArray, int idxOne, int idxTwo)
{
    int tmp = inputArray[idxOne];
    inputArray[idxOne] = inputArray[idxTwo];
    inputArray[idxTwo] = tmp;
}

void PrintArray(int* inputArray, int arrayLength)
{
    std::cout << "Printing Array: " << std::endl;

    for (int i=0; i<arrayLength; i++)
    {
        std::cout << inputArray[i] << ", ";
    }
    std::cout << std::endl;
}

void InsertionSort(int* inputArray, int arrayLength)
{
    int compares = 0;
    int sorted,unsorted;
    for (sorted=1; sorted<arrayLength; sorted++)
    {
        int nbrToSort = inputArray[sorted];
        unsorted=sorted;
        while (unsorted > 0 && nbrToSort < inputArray[unsorted-1])
        {
            inputArray[unsorted]=inputArray[unsorted-1];
            unsorted--;
            compares++;
        }
        inputArray[unsorted]=nbrToSort;
        PrintArray(inputArray, arrayLength);
    }
    std::cout << "Compare Count: " << compares << std::endl;
}

void SelectionSort(int* inputArray, int arrayLength)
{
    int compares = 0;
    int i,j,imin;
    for (i=0;i<arrayLength-1;i++)
    {
        imin=i;
        for (j=i+1;j<arrayLength;j++)
        {
            compares++;
            if (inputArray[j]<inputArray[imin])
            {
                imin=j;
            }
        }
        Swap(inputArray, i,imin);
        PrintArray(inputArray, arrayLength);
    }
    std::cout << "Compare Count: " << compares << std::endl;
}

void ExchangeSort(int* inputArray, int arrayLength)
{
    int compares = 0;
    int i,j;
    for (i=0;i<arrayLength-1;i++)
    {
        for (j=arrayLength-2;j>=i;j--)
        {
            compares++;
            if (inputArray[j]>inputArray[j+1])
            {
                Swap(inputArray,j, j+1);
                PrintArray(inputArray, arrayLength);
            }
        }
    }
    std::cout << "Compare Count: " << compares << std::endl;
}

int main()
{
    int a[] = {0, 10, 20, 1, 11, 21, 2, 12, 22};
    //InsertionSort(a, 9);
    //SelectionSort(a, 9);
    ExchangeSort(a,9);
    return 0;
}
