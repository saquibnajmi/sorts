#include <iostream>

int countsort(int arr[], int size){
    int max = arr[0];
    //finding max
    for(int i=0 ; i < size ; i++)
        if(arr[i]>max)
            max = arr[i];
    std::cout << "max :  " << max << std::endl;
    
    int count[max+1];
    //initialising to 0

    for(int i=0; i < max+1 ; i++)
        count[i] = 0;

    //counting from arr[] and storing to count[]
    for(int i=0; i < size ; i++)
        count[arr[i]]++;


    std::cout << "Sorted Array: ";
    int index=0;
    for (int i = 0; i < max+1; ++i) {
        for(;count[i]>0; --count[i]){
            arr[index++]= i;
        }
    }

}
int main(){
    int arr[] = {0,2,2,1,5,5,5,4,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    countsort(arr,size);

    //print sorted array
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
