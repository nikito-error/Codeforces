import java.util.Scanner;

public class B_RudolfAnd121_933_Div3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int arr[] = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = scanner.nextInt();
			}

			String s = "";
			for (int i = 0; i < n - 2; i++) {
				if (arr[i] >= 0) {
					arr[i + 1] -= 2 * arr[i];
					arr[i + 2] -= arr[i];
				} else {
					s = "NO";
				}
			}

			if (s == "NO") {
				System.out.println("NO");
				continue;
			}

			if (arr[n - 1] == 0 && arr[n - 2] == 0) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}