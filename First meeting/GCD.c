int main() {
    // Define two static variables a and b
    int a = 793; 
    int b = 7; 

    int remainder = 0;
    // Euclidean algorithm using a loop
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return 0;
}