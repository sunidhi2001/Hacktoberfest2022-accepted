
import java.util.*; 
class GFG 
{ 
    static void print(int [][] mat) 
    { 
        for (int i = 0; i < mat.length; i++) 
        { 
              if (i % 2 == 0) 
            { 
                for (int j = 0; j < mat[0].length; j++) 
                    System.out.print(mat[i][j] +" "); 
            } 
            else
            { 
                for (int j = mat[0].length - 1; j >= 0; j--) 
                    System.out.print(mat[i][j] +" "); 
            } 
        } 
    } 
  
    public static void main(String[] args) 
    { 
        int mat[][] = new int[][] 
        { 
            { 10, 20, 30, 40 }, 
            { 15, 25, 35, 45 }, 
            { 27, 29, 37, 48 }, 
            { 32, 33, 39, 50 } 
        }; 
        print(mat); 
    } 
}
