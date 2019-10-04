/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int tests = Integer.parseInt(br.readLine());
		
		for(int t = 0 ; t < tests ; t++)
		{
		    String order [] = br.readLine().split(" ");
		    int rows = Integer.parseInt(order[0]);
		    int cols = Integer.parseInt(order[1]);
		    
		    boolean row_array[] = new boolean[rows];
		    boolean col_array[] = new boolean[cols];
		    
		    
		    boolean a [][] = new boolean[rows][cols]; 
		    
		    for(int i = 0 ; i < rows ; i++)
		    {
		        String split_row [] = br.readLine().split(" ");
		        for(int j = 0 ; j < cols ; j++)
		        {
		            a[i][j] = Integer.parseInt(split_row[j]) > 0 ? true : false;
		          //  a[i][j] = i > 0 ? true : falsesc.nextBoolean();
		            if(a[i][j] == true)
		            {
		                row_array[i] = true;
		                col_array[j] = true;
		            }
		        }
		    }
		   
		    for(int j = 0 ; j < cols ;j++) //row 0
		    {
		      if(col_array[j] == true)
		      {
		          for(int i = 0 ; i < rows; i++)
		          {
		              a[i][j] = true;
		          }
		      }
		    }
		    
		    for(int j = 0 ; j < rows ;j++) //col 1
		    {
		      if(row_array[j] == true)
		      {
		          for(int  i = 0 ; i < cols; i++)
		          {
		            a[j][i] = true;
		          }
		      }
		    }
		    
		    StringBuilder sb = new StringBuilder();
		    for(int i = 0 ; i < rows ; i++)
		    {
		        for(int j = 0 ; j < cols ; j++)
		        {
                    if(a[i][j] == true)
		                sb.append(1 +" ");
		            else sb.append(0 +" ");
		            
		        }
		        sb.append("\n");
		    }
		    sb.setLength(sb.length() - 1);
		    System.out.println(sb);
		    
		}
	}
}
