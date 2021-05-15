int maximum(int a, int b){
    return a > b ? a : b;
}

int LCS(string s1, string s2, int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
                continue;
            }
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = maximum(t[i-1][j], t[i][j-1]);
            }
        }
    }
    return t[n][m];
}

int countMin(string str){
    string s2 = "";
    for(int i = str.length() - 1; i>=0; i--){
        s2 = s2 + str[i];
    }
    
    int lcs = LCS(str, s2, str.length(), s2.length());
    return str.length() - lcs;
    //complete the function here
}


// DP approach