//Minimize the Heights

//Problem statement

//Given an array arr[] denoting heights of N towers and a positive integer K.
//For each tower, you must perform exactly one of the following operations exactly once.
//Increase the height of the tower by K
//Decrease the height of the tower by K
//Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.


//Java solution

import java.io.*;
import java.util.*;

  public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int k = Integer.parseInt(inputLine[0]);
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            int ans = new Solution().getMinDiff(arr, n, k);
            System.out.println(ans);
        }
    }
}


class Solution {
    int getMinDiff(int[] arr, int n, int k) {
        int i;
        int tmpSmall;
        int tmpLarge;
        int diff;
        int smallest;
        int largest;
         
        Arrays.sort(arr);
              
        tmpSmall = arr[0]+k;
        tmpLarge = arr[n-1]-k;
        diff = arr[n-1] - arr[0];
      
         for(i=1;i<n;i++) {
            smallest = Math.min(tmpSmall, arr[i]-k);
            largest = Math.max(tmpLarge, arr[i-1]+k);
            if(smallest<0)continue;
            diff = Math.min(diff, largest - smallest);
        }   
        return diff;
        
    }
}

