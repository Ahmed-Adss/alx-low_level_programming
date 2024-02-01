import java.io.*;
import java.util.*;
public class Main
{
    
	public static void main(String[] args) {
        int[] arr = {1,3,15,7,12,4,0};
        max2(arr);
	}
	

    public static int[] max2 (int [] arr)
	{
        int max1,max2,min1,min2;
        
        if (arr[0] > arr[1])
        {
            max1 = arr[0];
            max2 = arr[1];
            min1 = arr[1];
            min2 = arr[0];
        }else {
            max1 = arr[1];
            max2 = arr[0];
            min1 = arr[0];
            min2 = arr[1];
        }
        for (int i = 2; i < arr.length; i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
                
            }else if (arr[i] > max2)
            {
                max2 = arr[i];
            }
            if (arr[i] < min1){
                min2 = min1;
                min1 = arr[i];
            }else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
        int[] result = {max2, min2};
    	System.out.println(Arrays.toString(result));
    	return result;

	}
}
