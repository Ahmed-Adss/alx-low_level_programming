12:53 ص
public static int sawTooth(int[] arr) {
		int up;
		if (arr[0]<arr[1]){
		    up=1;
		}
		else if (arr[0]>arr[1])
		{
		    up=0;
		}
		else return 0;
		for (int i=1;i<arr.length-1;i=i+2){
		    if (up==1)
		    { //{1,4,3,5,1,2,1};
		        if (arr[i]<arr[i-1] ||arr[i]<arr[i+1])
		        return 0;
		    }
		    else
		    { //{4,3,5,1,2,1,5}
		         if (arr[i]>arr[i-1] ||arr[i]>arr[i+1])
		        return 0;
		    }
		    
		}
		return 1;
		

	}‏‏