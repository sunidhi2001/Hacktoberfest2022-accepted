package Backtracking;

public class NxN_KillChessBoardQueen {	public static void main(String[] args) {
		// TODO Auto-generated method stub
	NQueen2DKill(new boolean[4][4],4,0,0,0,"");
	}

	public static void NQueen2DKill(boolean[][] board,int tq,int qpsf,int col,int row,String ans)
	{  
		//Positive Base Case
		if(qpsf==tq)
		{
			System.out.println(ans);
			return;
		}
		
		//Either use line 21-24  OR line 27-31
		
		//Manually changing row
		if(col==board[0].length)
		{
			row++;
			col=0;
		}
		//Or Giving a recursive call to avoid changing row manually
//		if(col==board[0].length)
//		{
//			NQueen2DKill(board,tq,qpsf,0,row+1,ans);
//			return;
//		}
	//	
		//Negative Base Case
		if(row==board.length)
			return;
		if(isItSafeToPlaceQueen(board,row,col))
		{
		board[row][col]=true;
		NQueen2DKill(board,tq,qpsf+1,0,row+1,ans+"{"+row+","+col+"}");
		board[row][col]=false;
		}
		//Not Place
		NQueen2DKill(board,tq,qpsf,col+1,row,ans);
	}
	public static boolean isItSafeToPlaceQueen(boolean[][] board,int row,int col) {
	//checking vertically up
		int r=row-1;
		int c=col;
		
		while(r>=0)
		{
			if(board[r][c])
				return false;
			r--;
		}
	//checking  Left
		r=row;
		c=col-1;
		while(c>=0)
		{
			if(board[r][c])
				return false;
			
			c--;
		}

	//checking diagonally left
		r=row-1;
		c=col-1;
		while(r>=0 && c>=0)
		{
			if(board[r][c])
				return false;
			r--;
			c--;
		}

	//checking diagonally right
		r=row-1;
		c=col+1;
		while(r>=0 && c<board[0].length)
		{
			if(board[r][c])
				return false;
			
			r--;
			c++;
		}
	return true;
	}
	}
