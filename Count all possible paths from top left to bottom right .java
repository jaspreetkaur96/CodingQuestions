import java.io.*;
import java.lang.*;
import java.util.*;

class GFG
{
    public static void main(String args[]) throws IOException{
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tests = Integer.parseInt(br.readLine());
        
        for(int t = 1 ; t <= tests ; t++)
        {
            String ar[] = br.readLine().split(" ");
            int m = Integer.parseInt(ar[0]);
            int n = Integer.parseInt(ar[1]);
            
            long a[][] = new long[m][n];
            
            a[m-1][n-1] = 1;
            for(int j = 0 ; j < n-1 ; j++)
            {
                a[m-1][j] = 1;
            }
            
             for(int i = 0 ; i < m-1 ; i++)
            {
                a[i][n-1] = 1;
            }
            
            for(int i = m-2 ; i >= 0 ; i--)
            {
                for(int j = n-2 ; j >= 0 ; j--)
                {
                    a[i][j] = (a[i+1][j] + a[i][j+1]) % 1000000007;
                }
            }
            
            long result = a[0][0] % 1000000007;
            System.out.println(result);
        }
    }
}
