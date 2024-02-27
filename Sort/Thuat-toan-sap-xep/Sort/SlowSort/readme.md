# How it works:

If r >= l, perform the following steps:

- Find the middle value of the array as m = (l + r) / 2.
- Recursively call function SlowSort to find the maximum of first half elements: SlowSort(arr, l, m)
- Recursively call function SlowSort to find the maximum of second-half elements: SlowSort(arr, m + 1, r)
- Store the largest of two maxima returned from the above function calls at the end as arr[r] = max(arr[m], arr[r])
- Recursively call function SlowSort without the maximum obtained in the above step: SlowSort(arr, l, r-1)
