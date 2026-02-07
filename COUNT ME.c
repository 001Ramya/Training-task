int countDigits(int n) {
    int digit=0;
    while(n>0)
    {
        n/=10;
        digit++;
        
    }
    return digit;
}
