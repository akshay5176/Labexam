package com.copmain.main;

public class ArrayMain {

	public static void main(String[] args) {
		int[] arr= {34,32,67,76,66,98};
		int i,max=arr[arr.length-1],min=arr[0];
		for(i=0;i<arr.length-1;i++) {
			if(arr[i]>max)
				max=arr[i];
			
			if(arr[i]<min)
				min=arr[i];
		}
		int diff=max-min;
		System.out.println("The difference between maximum and minimum is: "+diff);

	}

}
