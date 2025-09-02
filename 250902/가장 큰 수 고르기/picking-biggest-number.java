import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] a = new int[10];
        final int INT_MIN = Integer.MIN_VALUE;
        int maxVal = INT_MIN;

        for(int i = 0; i < a.length; i++){
            a[i] = scanner.nextInt();
            if(maxVal < a[i]) maxVal = a[i];
        }

        System.out.println(maxVal);
    }
}