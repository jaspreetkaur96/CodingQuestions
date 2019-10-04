class GfG
{
    int tour(int petrol[], int distance[])
    {
	    int i = 0 ;
	    int n = petrol.length;
	   // System.out.println(n/2);
	    while(i < n)
	    {
	        int TP = 0;
	        
	        for(int j = i ; j < n ; j = (++j)%n)
	        {
	            TP = TP + petrol[j] - distance[j];
	           // System.out.println("TP" + TP + " i" + i + " " + j);
	            
	            if(TP < 0)
	            {
	               // System.out.println("TP" + TP + " i" + i + " " + j);
	                break;
	            }
	            else
	            {
	                if((j + 1) % n == i)
	                    return i;
	            }
	        }
	        i++;
	    }
	    
	    return -1;
    }
}
