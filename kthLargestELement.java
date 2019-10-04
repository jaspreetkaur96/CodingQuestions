/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int tests = Integer.parseInt(br.readLine());
		
		for(int t = 1 ; t <= tests ; t++)
		{
		    String ar[] = br.readLine().split(" ");
		    
		    int k = Integer.parseInt(ar[0]);
		    int n = Integer.parseInt(ar[1]);
		    
		    ar = br.readLine().split(" ");
		    PriorityQueue<Integer> pq = new PriorityQueue<>(); //min heap
		  
		    for(int i = 0 ; i < k-1 ; i++)
		    {
		        pq.add(Integer.parseInt(ar[i]));
		        System.out.print("-1 ");
		    }
		    pq.add(Integer.parseInt(ar[k-1]));
		    System.out.print(pq.peek() + " ");
		    
		    for(int i = k ; i < n ; i++)
		    {
		        if(pq.peek() < Integer.parseInt(ar[i]))
		        {
		            pq.poll();
		            pq.add(Integer.parseInt(ar[i]));
		        }
		        System.out.print(pq.peek() + " ");
		    }
		    System.out.println(" ");
		}
	}
}
