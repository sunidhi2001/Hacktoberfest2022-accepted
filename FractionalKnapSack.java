public class FractionalKnapSack {

    // return maximum of two integers
    static int max(int a, int b) {
        return (a > b) ? a : b;
    }

    static void knapSack(int W, int wt[], int val[], int n) {
        int i, w;
        int M[][] = new int[n + 1][W + 1];

        // Build table M[][]
        for (i = 0; i <= n; i++) {
            for (w = 0; w <= W; w++) {
                if (i == 0 || w == 0)
                    M[i][w] = 0;
                else if (wt[i - 1] <= w)
                    M[i][w] = max(val[i - 1] + M[i - 1][w - wt[i - 1]], M[i - 1][w]);
                else
                    M[i][w] = M[i - 1][w];
            }
        }
        System.out.println("Maximum Value:\t" + M[n][W]);

        System.out.println("Selected Packs: ");

        while (n != 0) {
            if (M[n][W] != M[n - 1][W]) {
                System.out.println("Pack " + n + " with weight = " + wt[n - 1] + " and value = " + val[n - 1]);

                W = W - wt[n - 1];
            }
            n--;
        }
    }

    public static void main(String args[]) {
        int value[] = new int[] { 2, 6, 4, 3 };
        int weight[] = new int[] { 3, 4, 5, 6 };
        int W = 8;
        int n = value.length;
        knapSack(W, weight, value, n);
    }
}

/*output
Maximum Value:  8
Selected Packs:
Pack 2 with weight = 4 and value = 6
Pack 1 with weight = 3 and value = 2
*/