package Backtracking;

public class QueenCombinations2DBoard {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    QueenCombinations2D(new boolean[2][2],2,0,0,0,"");
	}
public static void QueenCombinations2D(boolean[][] board,int tq,int qpsf,int col,int row,String ans)
{  
	//Positive Base Case
	if(qpsf==tq)
	{
		System.out.println(ans);
		return;
	}
	
	//Either use line 21-24  OR line 27-31
	
	//Manually changing row
//	if(col==board[0].length)
//	{
//		row++;
//		col=0;
//	}
	//Or Giving a recursive call to avoid changing row manually
	if(col==board[0].length)
	{
		QueenCombinations2D(board,tq,qpsf,0,row+1,ans);
		return;
	}
	
	//Negative Base Case
	if(row==board.length)
		return;
	
	board[row][col]=true;
	QueenCombinations2D(board,tq,qpsf+1,col+1,row,ans+"{"+row+","+col+"}");
	board[row][col]=false;
	
	//Not Place
	QueenCombinations2D(board,tq,qpsf,col+1,row,ans);
}
}
