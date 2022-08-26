/* The gcd() function */
int gcd ( int a , int b ) {
    while ( b ) { /* if a < b, performs swap */
        int temp = b ;
        b = a % b ;
        a = temp ;
    }
    return a ;
}

int ext_euclid (int a, int b){
    int g = gcd(a,b);

}