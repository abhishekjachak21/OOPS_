public class ReverseArray {
    public static void main(String[] args) {
        int[] a = {2, 9, 6, 12, 3, 7, 4};
        int n = a.length;

        // Printing the original array
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();

        // Printing the reversed array
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(a[i] + " ");
        }
    }
}
