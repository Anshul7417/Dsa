// find unique pair

int findUnique(int *arr, int size)
{    
    int x=0;
    for(int i = 0 ; i<size;i++){
        x=x^arr[i]; 
    }
    return x;
    
}