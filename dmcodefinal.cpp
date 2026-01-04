#include <iostream>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace chrono;
void bubblesort (int arr[], int n)
{
        for (int i=0;i<n-1;i++)
        {
            cout << "step " << i+1 << ":" << endl;
            for (int j=0;j<n-i-1;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            for (int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
}
void selectionsort (int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        cout << "step " << i+1 << ":" << endl;
        int min=i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }  
        }
        if (min != i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        for (int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }
        cout<<endl;
            
    }
}
void insertionsort (int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        cout << "step " << i << ":" << endl;
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for (int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }
        cout<<endl;
    }
}
void merge(int arr[], int l, int m, int r, int n)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];

    cout << "After merging [" << l << "..." << r << "]: ";
    for (int x = 0; x < n; x++)
        cout << arr[x] << " ";
    cout << endl;
    delete[] L;
    delete[] R;
}
void mergesort(int arr[], int l, int r, int n)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergesort(arr, l, m, n);
        mergesort(arr, m + 1, r, n);

        merge(arr, l, m, r, n);
    }
}
int partition(int arr[], int low, int high, int n)
{
    int pivot = arr[high];
    int i = low - 1;

    cout << "\nPivot = " << pivot << endl;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            cout << "Swapped: ";
            for (int x = low; x <= high; x++)
                cout << arr[x] << " ";
            cout << endl;
        }
    }

    swap(arr[i + 1], arr[high]);

    cout << "Pivot placed: ";
    for (int x = 0; x < n; x++)
        cout << arr[x] << " ";
    cout << endl;

    return i + 1;
}
void quicksort(int arr[], int low, int high, int n)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, n);
        quicksort(arr, low, pi - 1, n);
        quicksort(arr, pi + 1, high, n);
    }
}
int main ()
{
    while (true)
    {
        string input;
        int size;
        while (true) 
            {
                cout << "Enter the size of the array: ";
                cin >> input;

                bool valid = true;

                for (int i = 0; i < input.length(); i++) 
                    {
                        if (!((input[i] >= '0' && input[i] <= '9') )) 
                            {
                                valid = false;
                                break;
                            }
                    }

                        if (valid) 
                            {
                                size = stoi(input);
                                break;
                            }
                        else 
                            {
                                cout << "Invalid choice! Only numbers are allowed." << endl;
                            }
            }
        cin.ignore();
        int arr[100];
        int originalArr[100];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++)
        {
            while (!(cin >> arr[i]) || arr[i] < 0 || arr[i] > 1000)
            {
                cout << "Invalid! \nEnter a number between 0 and 1000: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            originalArr[i] = arr[i];
        }
        int lowvalue = 0;
        int highvalue = size - 1;
        string algoNames[5];
        long long algoTimes[5];
        int algoCount = 0;
        int mainchoice;
        bool exitMenu = false;
        while(!exitMenu)
        {
            cout <<"*******************************"<<endl;
            cout <<"      SORTING ALGORITHMS      "<<endl;
            cout <<"*******************************"<<endl;
            cout <<" 1. BUBBLE SORT              "<<endl;
            cout <<" 2. SELECTION SORT           "<<endl;
            cout <<" 3. INSERTION SORT           "<<endl;
            cout <<" 4. MERGE SORT               "<<endl;
            cout <<" 5. QUICK SORT               "<<endl;
            cout <<" 6. EXIT                     "<<endl;
            while (true) 
            {
                cout << "Enter your choice: ";
                cin >> input;

                if (input.length() == 1 && input[0] >= '1' && input[0] <= '6') 
                {
                    mainchoice = input[0] - '0';
                    break;
                } else {
                    cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
                }
            }

            cout << "You chose option: " << mainchoice << endl;

            switch (mainchoice)
            {
                case 1:
                    {
                        cout << "You selected BUBBLE SORT." << endl;
                        for (int i = 0; i < size; i++) 
                        {
                            arr[i] = originalArr[i]; 
                        }
                        auto start = chrono::high_resolution_clock::now();
                        bubblesort(arr, size);
                        auto stop = chrono::high_resolution_clock::now();

                        long long duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
                        cout << "Total Time Taken: " << duration << " nanoseconds" << endl;
                        
                        algoNames[algoCount] = "Bubble Sort";
                        algoTimes[algoCount] = duration;
                        algoCount++;
                        break;
                    }
                case 2:
                    {
                        cout << "You selected SELECTION SORT." << endl;
                        for (int i = 0; i < size; i++) 
                        {
                            arr[i] = originalArr[i]; 
                        }
                        auto start = high_resolution_clock::now();
                        selectionsort(arr, size);
                        auto stop = high_resolution_clock::now();

                        long long duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
                        cout << "Total Time Taken: " << duration << " nanoseconds" << endl;
                        algoNames[algoCount] = "Selection Sort";
                        algoTimes[algoCount] = duration;
                        algoCount++;
                        break;
                    }
                case 3:
                    {
                        cout << "You selected INSERTION SORT." << endl;
                        for (int i = 0; i < size; i++)
                        {
                            arr[i] = originalArr[i];
                        }
                        auto start = high_resolution_clock::now();
                        insertionsort(arr, size);
                        auto stop = high_resolution_clock::now();

                        long long duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
                        cout << "Total Time Taken: " << duration << " nanoseconds" << endl;

                        algoNames[algoCount] = "Insertion Sort";
                        algoTimes[algoCount] = duration;
                        algoCount++;
                        break;
                    }
                case 4:
                    {
                        cout << "You selected MERGE SORT." << endl;
                        for (int i = 0; i < size; i++) 
                        {
                            arr[i] = originalArr[i]; 
                        }
                        auto start = high_resolution_clock::now();
                        mergesort(arr, lowvalue, highvalue, size);
                        auto stop = high_resolution_clock::now();

                        long long duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
                        cout << "Total Time Taken: " << duration << " nanoseconds" << endl;

                        algoNames[algoCount] = "Merge Sort";
                        algoTimes[algoCount] = duration;
                        algoCount++;
                        break;
                    }
                case 5:
                    {
                        cout << "You selected QUICK SORT." << endl;
                        for (int i = 0; i < size; i++)
                        {
                            arr[i] = originalArr[i];
                        }
                        auto start = high_resolution_clock::now();
                        quicksort(arr, lowvalue, highvalue, size);
                        auto stop = high_resolution_clock::now();

                        long long duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
                        cout << "Total Time Taken: " << duration << " nanoseconds" << endl;

                        algoNames[algoCount] = "Quick Sort";
                        algoTimes[algoCount] = duration;
                        algoCount++;
                        break;
                    }
                case 6:
                    {
                        cout << "Exiting the program." << endl;
                        cout << "\n-----------------------------------------" << endl;
                        cout << left << setw(20) << "Algorithm" << "Duration (nanoseconds)" << endl;
                        cout << "----------------------------------------" << endl;

                        for (int i = 0; i < algoCount; i++)
                        {
                            cout <<left << setw(20) << algoNames[i] << algoTimes[i] << endl;
                        }

                        cout << "----------------------------------------" << endl;
                        exitMenu = true;
                        break;
                    }    
                default:
                    cout << "Invalid choice!" << endl;
            }
        }
        char continueChoice;
        cout << "\nDo you want to continue? (y/n): ";
        cin >> continueChoice;

        if (continueChoice == 'n' || continueChoice == 'N')
        {
            cout << "Program terminated.\n";
            break;
        }

    }
}









