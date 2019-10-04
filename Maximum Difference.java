/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int tests = sc.nextInt();
		
		for(int t = 0 ; t < tests ; t++)
		{
		    int size = sc.nextInt();
		    int max_diff = Integer.MIN_VALUE;
		    int a [] = new int[size]; 
		    for(int i = 0 ; i < size ; i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    int i = 0;
		    while(i < size)
		    {
		        for(int j = i+1 ; j < size ; j++)
		        {
		            int curr  = a[j] - a[i];
		            if(curr < 0)
		            {
		                break;
		            }
		            max_diff = Math.max(max_diff , curr);
		        }
		        i++;
		    }
		    System.out.println(Math.max(-1,max_diff));
		}
	}
}




/* Alternative
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int tests = sc.nextInt();
		
		for(int t = 0 ; t < tests ; t++)
		{
		    int size = sc.nextInt();
		    int max_diff = Integer.MIN_VALUE;
		    int a [] = new int[size]; 
		    for(int i = 0 ; i < size ; i++)
		    {
		        a[i] = sc.nextInt();
		    }
		    int curr_diff = 0;
		    
		    for(int i = 0 ; i < size - 1 ; i++)
		    {
		        curr_diff = Math.max(curr_diff + a[i+1] - a[i], 0);
		        max_diff = Math.max(max_diff, curr_diff);
		    }
		    
		  if(max_diff == 0) max_diff = -1;
		 System.out.println(max_diff);
		}
	}
}

*/
