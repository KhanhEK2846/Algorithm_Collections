#include <iostream>
#define MAX_LENGHT 12
using namespace std;


void ReverseArr(int * arr,int where){
    for(int i=0; i<=where/2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[where-i];
        arr[where-i] = tmp;
    }
    
}

void PancakeSort(int * arr){
    for(int j =MAX_LENGHT-1; j >= 0; j--)
    {
        int max_id = 0;
        for(int i = 0;i<=j;i++){
            if(arr[max_id] < arr[i])
                max_id = i;
        }
        ReverseArr(arr,max_id);
        ReverseArr(arr,j);
    }
}

int main()
{
    int Arr[MAX_LENGHT] = {6,75,96,20,45,98,39,34,69,54,100};
    PancakeSort(Arr);
    for(int i =0;i<MAX_LENGHT;i++)
        cout<<Arr[i]<<" ";

    return 0;
}