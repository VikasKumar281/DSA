int firstDigit(int n) {
    while(n >= 10) {
        n /= 10;
    }
    return n;
}
