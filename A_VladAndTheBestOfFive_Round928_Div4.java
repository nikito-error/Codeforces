import java.util.Scanner;

public class A_VladAndTheBestOfFive_Round928_Div4 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			String s = scanner.next();
			int cntA = 0, cntB = 0;
			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) == 'A') {
					cntA++;
				} else {
					cntB++;
				}
			}
			if (cntA > cntB) {
				System.out.println('A');
			} else {
				System.out.println('B');
			}
		}
	}
}
