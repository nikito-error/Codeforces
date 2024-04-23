import java.util.Scanner;

public class A_RudolfAndTheTicket_933_Div3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			int k = scanner.nextInt();
			int arrA[] = new int[n];
			int arrB[] = new int[m];
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				int a = scanner.nextInt();
				arrA[i] = a;

			}

			for (int j = 0; j < m; j++) {
				int b = scanner.nextInt();
				arrB[j] = b;
			}

			for (int ii = 0; ii < arrA.length; ii++) {
				for (int jj = 0; jj < arrB.length; jj++) {
					if (arrA[ii] + arrB[jj] <= k) {
						cnt++;
					}
				}
			}

			System.out.println(cnt);
		}
	}
}
