#include <stdio.h>

int Palindrome(int num)  // To check the given number is a palindrome or not 
    {
    int n = num;
    int rnum = 0;

    
    while (num != 0) {
        int remainder = num % 10;
        rnum = rnum * 10 + remainder;
        num /= 10;
    }

    if (n == rnum)
        return 1;  // Return 1 ,if a Palindrome
    else
        return 0;  // Return 0 if not a palindrome
}

int main() {
    int num;
    scanf("%d", &num);
    if (num<0) // For Negative Numbers
    {
        printf("Is not a palindrome.\n");
    }
    else if (Palindrome(num))
    {
        printf("Is a palindrome.\n");
    }
    else{
        printf("Is not a palindrome.\n");
    }
}
