//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// n: size of matrix (n*n)
int getId(int M[MAX][MAX], int n)
{
    int knows[n] = {0};
    int known[n] = {0};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        	if(i == j)continue;
            	if(M[i][j] == 1){
                	knows[i]++;
                	known[j]++;
            	}
        }
    }
    
    for(int i = 0; i < n; i++){
        if(known[i] == n-1 && knows[i] == 0)
            return i;
    }
    return -1;
}

