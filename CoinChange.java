package Backtracking;

public class CoinChangeWrtCoin {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  CoinChange(new int[] {1,2,3},0,4,"");
	}
public static void CoinChange(int[] denom,int vidx,int amount,String ans) {
	//Positive Base Case
	if(amount==0)
	{
		System.out.println(ans);
		return;
	}
	
	//negative base case
	if(amount<0 || vidx==denom.length)
	{
		return;
	}
	
	//yes
	CoinChange(denom,vidx,amount-denom[vidx],ans+denom[vidx]);
	
	//no 
	CoinChange(denom,vidx+1,amount,ans);
}
}
