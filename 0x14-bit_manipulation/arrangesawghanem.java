1:28 ص
public static int[] arrangeSawTooth(int[] arr) {
		if(sawTooth(arr)==1)
		return arr;
		
		int up=-1;
		if (arr[0]<arr[1]){
		    up=1;
		}
		else if (arr[0]>arr[1])
		{
		    up=0;
		}
		int temp=0;
	for (int i=1;i<arr.length-1;i++){
	//{4,3,2,1,0,1,5}
	if(up==1){
	    if(arr[i]<arr[i+1]){
	        temp=arr[i];
	        arr[i]=arr[i+1];
	        arr[i+1]=temp;
	    }
	    up=0;
	}
	else { //{4,3,2,1,0,1,5}
	     if(arr[i]>arr[i+1]){
	        temp=arr[i];
	        arr[i]=arr[i+1];
	        arr[i‏‏
‪kfu-eppq-mje‬‏