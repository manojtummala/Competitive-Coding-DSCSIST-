int rangeBitwiseAnd(int m, int n){
    while (m != n) {
        n &= (n - 1);
        while (m > n) {
            m &= (m - 1);
        }
    }
    
    return n;
}