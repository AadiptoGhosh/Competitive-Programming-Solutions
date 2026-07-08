int getRomanValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(char *s) {
    int total = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        int currentVal = getRomanValue(s[i]);
        int nextVal = (i < length - 1) ? getRomanValue(s[i + 1]) : 0;
        if (currentVal < nextVal) {
            total -= currentVal;
        } else {
            total += currentVal;
        }
    }
    return total;
}