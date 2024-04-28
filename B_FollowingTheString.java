/*this work for optimal version for time limit
  public class B_FollowingTheString {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		char[] alphabet = "abcdefghijklmnopqrstuvwxyz".toCharArray();
		while (t-- > 0) {
			int n = scanner.nextInt();
			StringBuilder s = new StringBuilder();
			Map<Integer, Integer> freq = new HashMap<>();
			for (int i = 0; i < n; i++) {
				int a = scanner.nextInt();
				int count = freq.getOrDefault(a, 0) % 26;
				freq.put(a, count + 1);
				s.append(alphabet[count]);
			}
			System.out.println(s);
		}
	}
}
 */

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class B_FollowingTheString {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			char[] alphabet = "abcdefghijklmnopqrstuvwxyz".toCharArray();
			String s = "";
			Map<Integer, Integer> freq = new HashMap<Integer, Integer>();
			for (int i = 0; i < n; i++) {
				int a = scanner.nextInt();
				int count = freq.containsKey(a) ? freq.get(a) + 1 : 0;
				freq.put(a, count);
				s += alphabet[count];
			}
			System.out.println(s);
		}

	}
}
