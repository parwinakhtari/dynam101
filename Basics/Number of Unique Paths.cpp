/
  /*
  Complete Question Link: https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&difficulty[]=0&page=1&query=category[]Dynamic%20Programmingdifficulty[]0page1category[]Dynamic%20Programming
*/

int NumberOfPath(int a, int b)
    {
        //code here
    int count[a][b];
 
    // Count of paths to reach any cell in first column is 1
    for (int i = 0; i < a; i++)
        count[i][0] = 1;
 
    // Count of paths to reach any cell in first row is 1
    for (int j = 0; j < b; j++)
        count[0][j] = 1;
 
    // Calculate count of paths for other cells in
    // bottom-up manner using the recursive solution
    for (int i = 1; i < a; i++) {
        for (int j = 1; j < b; j++)
 
            // By uncommenting the last part the code calculates the total
            // possible paths if the diagonal Movements are allowed
            count[i][j] = count[i - 1][j] + count[i][j - 1]; //+ count[i-1][j-1];
    }
    return count[a - 1][b - 1];
    }
