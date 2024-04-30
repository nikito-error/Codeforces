import java.util.Scanner;

public class A_ThornAndCoins {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			String s = scanner.next();
			int cnt = 0;
			for (int i = 0; i < s.length(); i++) {
				if (i + 1 < s.length() && s.charAt(i) == '*' && s.charAt(i + 1) == '*') {
					break;
				}

				if (s.charAt(i) == '@')
					cnt++;
			}
			System.out.println(cnt);
		}
	}
}
