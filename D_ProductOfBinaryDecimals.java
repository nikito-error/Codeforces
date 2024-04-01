import java.util.Scanner;

public class D_ProductOfBinaryDecimals {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t > 0) {
			int n = scanner.nextInt();
			boolean bIsDecimal = false;
			boolean bIsDivisor = false;
			String fNum = String.valueOf(n);
			for (int i = 0; i < fNum.length(); i++) {
				if (fNum.charAt(i) <= '1') {
					bIsDecimal = true;
				} else {
					bIsDecimal = false;
					break;
				}
			}

			int limit = (int) Math.sqrt(n);
			int[] divisors = { 11, 10, 110, 101, 111, 100, 1111, 1110, 1101, 1011, 1100, 1010, 1001, 1000, 11111, 11110,
					11101, 11011, 10111, 11100, 11010, 10110, 11001, 10101, 10011, 11000, 10100, 10010, 10001, 10000,
					100000 };

			for (int j = 0; j < limit; j++) {
				for (int divisor : divisors) {
					if (n % divisor == 0) {
						n = n / divisor;
						divisor = 0;
						if (n == 1) {
							bIsDivisor = true;
							break;
						}
						if (n <= 0) {
							bIsDivisor = false;
							break;
						}
					}
				}
			}

			if (bIsDecimal && bIsDivisor) {
				System.out.println("YES");
			} else if (bIsDecimal && !bIsDivisor) {
				System.out.println("YES");
			} else if (!bIsDecimal && bIsDivisor) {
				System.out.println("YES");
			} else if (!bIsDecimal && !bIsDivisor) {
				System.out.println("NO");
			}
			t--;

		}
	}
}
