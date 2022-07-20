void swapalternate(int arr, int size)
{
    for (size_t i = 0; i < size; i += 2)
    {
        if (i + 1 < size)                             // swapping alternate elements
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}