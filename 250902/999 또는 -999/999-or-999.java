import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] a = new int[100];
        int i = 0;
        final int INT_MAX = Integer.MAX_VALUE;
        final int INT_MIN = Integer.MIN_VALUE;

        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        
        while(true){
            a[i] = scanner.nextInt();
            if(a[i] == 999 || a[i] == -999) break;

            if(a[i] < minVal) minVal = a[i];
            if(a[i] > maxVal) maxVal = a[i];

            i++;
        }

        System.out.println(maxVal + " " + minVal);
    }
}