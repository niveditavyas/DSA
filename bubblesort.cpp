// ALGORITHM:
/* bubbleSort(array)  
n = length(array)  
repeat  
  swapped = false  
  for i = 1 to n - 1  
         if array[i - 1] > array[i], then  
         swap(array[i - 1], array[i])  
         swapped = true  
         end if  
   end for  
   n = n - 1  
 until not swapped  
end bubbleSort  
  */
//CODE:
#include<iostream>    
using namespace std;    
    void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
       cout<<a[i]<<" ";     
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
 int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    
 }  
