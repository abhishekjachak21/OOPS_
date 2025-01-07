
import java.util.*;

public class StreamExample {
    public static void main(String[] args) {
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5,6,7,8,9);

        // Use stream to filter even numbers
        numbers.stream()
                .filter(n -> n % 2 == 0)  // Keep only even numbers
                .forEach(System.out::println);  // Print the result

                int[] arr = {1, 2, 3};
System.out.println(arr[0]);  // Access via index
arr[2] = 4;  // Update value
for (int num : arr) {
    System.out.println(num);  // Iterate
}
    }
}




