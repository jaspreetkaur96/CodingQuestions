/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int tests = Integer.parseInt(br.readLine());
		
		for(int t = 1 ; t <= tests ; t++)
		{
		    String ar [] = br.readLine().split(" ");
		    int n = Integer.parseInt(ar[0]);
		    int k = Integer.parseInt(ar[1]);
		    
		    StringBuffer sb = new StringBuffer();
		    int temp = n;
		    
		    while(temp > 0)
		    {
		        sb.append(temp % 2);
		        temp /= 2;
		    }
		    
		   if(sb.charAt(k) == '1')
		   {
		      // System.out.println("char"+sb.charAt(k));
		       System.out.println(n);
		   }
		   else
		   {
		        int result = n + (int)Math.pow(2,k);
		        System.out.println(result);
		   }
		  
		   
		}
	}
}
