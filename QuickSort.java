package QuickSort;

public class quickSort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    int[] array= {32,45,324,65,23,435,22,11,9};
    QuickSort(array,0,array.length-1);
    for(int val:array)
    	System.out.print(val+" ");
	}
public static void QuickSort(int[] arr,int lo,int hi) {
  if(lo>=hi) 
  { return;}
  
	int left=lo;
	int right=hi;
int mid=(lo+hi)/2;
int pivot=arr[mid];

while(left<=right) 
{
	while(arr[left]<pivot) {
		left++;
	}
	while(arr[right]>pivot)
	{
		right--;
	}
	
	if(left<=right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
	    left++;
	    right--;	
	}
}
QuickSort(arr,lo,right);
QuickSort(arr,left,hi);

}
}
