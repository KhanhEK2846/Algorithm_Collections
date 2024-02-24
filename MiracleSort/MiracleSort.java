package MiracleSort;

public class MiracleSort {
    public void miracleSort(int[] arr) {
        boolean sorted = false;
        do {
          sorted = true;
          for (int i = 1; i < arr.length; i++) {
            if (arr[i] < arr[i - 1]) {
              sorted = false;
              break;
            }
          }
        } while (!sorted);
      }
}
