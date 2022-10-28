package RecursionGet;

import java.util.ArrayList;

//Get all subsequences of a string in arraylist and return the arraylist.
public class SubsequencesofString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
      System.out.println(getSS("abc"));
	}
public static ArrayList<String> getSS(String str){
	if(str.length()==0)
	{		ArrayList<String> baseResult=new ArrayList();
	    baseResult.add("");
	    return baseResult;
    }
	char cc=str.charAt(0);
	String rem=str.substring(1);
	ArrayList <String> myResult=new ArrayList();
	ArrayList<String> recResult=getSS(rem);
	
	for(int i=0;i<recResult.size();i++) {
		myResult.add(recResult.get(i));
		myResult.add(cc+recResult.get(i));
	}
	return myResult;
	
	
}
}
