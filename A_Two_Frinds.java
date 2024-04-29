import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class A_Two_Frinds {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int[] a = new int[n + 1]; // Array to store the elements
			int res = 4;
			for (int i = 1; i <= n; i++) {
				a[i] = scanner.nextInt();
			}

			for (int i = 1; i <= n; i++) {
				Set<Integer> s = new HashSet<>(); // Set to store unique elements
				s.add(i);
				s.add(a[i]);
				s.add(a[a[i]]);
				res = Math.min(res, s.size());
			}
			System.out.println(res);
		}
	}
}