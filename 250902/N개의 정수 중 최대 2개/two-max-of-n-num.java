import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        Vector<Integer> v = new Vector<>();

        for(int i = 0; i < n; i++){
            v.add(scanner.nextInt());
        }

        Collections.sort(v, Collections.reverseOrder());

        System.out.println(v.get(0)+ " " + v.get(1));
    }
}