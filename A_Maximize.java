import java.util.Scanner;

public class A_Maximize {
	public static int findGCD(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int x = scanner.nextInt();
			int y = 0;
			int nextindex = 0;
			int max = 0;
			for (int i = 1; i < x; i++) {
				y = i;
				int gcd = findGCD(x, y);
				if (max <= gcd) {
					max = gcd;
					nextindex = y;
				}
			}
			System.out.println(nextindex);
		}
	}
}
