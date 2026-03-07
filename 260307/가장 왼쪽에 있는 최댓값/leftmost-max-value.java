import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int max_index = -1;
        int[] index = new int[n];

        for(int i = 0; i < n; i++){
            index[i] = Integer.parseInt(st.nextToken());
        }

        while(max_index != 0){
            int max = 0;

            for(int i = 0; i < n; i++){
                if(max < index[i]){
                        max = index[i];
                        max_index = i;
                    } 
            }

            System.out.print(max_index+1 +" ");
            n = max_index;
        }

    }
}
