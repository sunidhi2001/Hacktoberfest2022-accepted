package Strings;

import java.util.Scanner;

public class stringCompression {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner ss=new Scanner(System.in);
		String str=ss.nextLine(); 
		ss.close();
		System.out.println(str);
		String k=stringCompress(str);
        System.out.println(k);
	}
	public static String stringCompress(String str) {
		int c=0;
		StringBuilder sb=new StringBuilder();
		for(int i=0;i<=str.length()-1;i++) {
			if(i<str.length()-1 && str.charAt(i)==str.charAt(i+1)) {
				c++;
			}
			else
			{
				sb.append(str.charAt(i));
				
				if(c>0)
					sb.append(c+1);
				c=0;
			}
			
		}
	return sb.toString();
	}

}
