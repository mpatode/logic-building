import java.util.Scanner;


class program128 {
    public static void main(String A[]) {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
        Digit digit = new Digit();

        System.out.println("Enter number : ");
        int iValue = scanner.nextInt();

        iRet = digit.sumDigits(iValue);

        System.out.println("Summation of Digits : "+ iRet);
    }

}