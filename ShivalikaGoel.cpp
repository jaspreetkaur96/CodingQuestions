#include<iostream>
#include<cstring>
using namespace std;
int chartoint(string str,int arr[])
{
	int n=str.length();
		// cout<<n<<endl;
		int j=0,i=0;
		while(i!=n)
		{
		// cout<<i<<" "<<j<<endl;
			if(str[i]!=' ')
			{
				// cout<<str[i]<<endl;
				if(str[i]=='-')
				{
					i=i+1;
					// cout<<str[i]<<endl;
					int num=0;
					while(str[i]!=' '&&i!=n)
					{
						// cout<<num<<endl;
						num=num*10+(str[i]-'0');
						i++;
					}
					// cout<<num<<endl;
					arr[j]=-num;
					j++;
				}
				else
				{
						int num=0;
					while(str[i]!=' '&&i!=n)
					{
						num=num*10+(str[i]-'0');
						i++;
					}
					// cout<<num<<endl;
					arr[j]=num;
					j++;
				}
				// cout<<arr[j-1]<<endl;
			
			}
			else
				i++;
		}

	return j;
}
void merger(int arr[],int s,int mid,int e)
{
	int l1=mid-s+1;
	int l2=e-mid;
	int arr1[l1];
	int arr2[l2];
	for(int i=0;i<l1;i++)
		arr1[i]=arr[s+i];
		for(int i=0;i<l2;i++)
		arr2[i]=arr[mid+1+i];
	int i=0,j=0,k=s;

  while(i<l1&&j<l2) 
    { 
        if (arr1[i]<=arr2[j]) 
        { 
            arr[k]=arr1[i]; 
            i++; 
            k++; 
        } 
        else
        { 
            arr[k]=arr2[j]; 
            j++; 
            k++;
        } 
        
    }

       while(i<l1) 
    { 
        arr[k] = arr1[i]; 
        i++; 
        k++; 
    } 
        while(j<l2) 
    { 
        arr[k] = arr2[j]; 
        j++; 
        k++; 
    } 



}
void mergesort(int arr[],int i,int j)
{
	if(i<j)
	{
	int mid=(j+i)/2;
	 mergesort(arr, i, mid); 
       mergesort(arr, mid+1, j); 
       merger(arr,i,mid,j);
   	}
}

int main(int argc,char*argv[])
{
	string s1,s2;
	s1=argv[1];
	s2=argv[2];
	int arr[100];
	int n=chartoint(s2,arr);
	// for(int i=0;i<n;i++)
	// 	cout<<arr[i]<<" ";
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	}