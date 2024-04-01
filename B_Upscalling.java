import java.util.Scanner;

public class B_Upscalling {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int j = 0; j < t; j++) {
			String s = "##";
			int n = scanner.nextInt();
			for (int i = 0; i < n; i++) {
				if (i > 0) {
					if (i % 2 == 0) {
						s += "##";
					} else {
						s += "..";
					}
				}
			}
			int cnt = 0;
			for (int i = 0; i < 2 * n; i++) {
				if (n % 2 == 0) {
					if (cnt == 0 || cnt == 1) {
						System.out.println(s);
					}

					if (cnt == 2) {
						StringBuilder sb = new StringBuilder(s);
						System.out.println(sb.reverse());
					}
					if (cnt == 3) {
						cnt = -1;
						StringBuilder sb = new StringBuilder(s);
						System.out.println(sb.reverse());
					}

					cnt++;
				}

				if (n % 2 == 1) {
					if (cnt == 0 || cnt == 1) {
						System.out.println(s);
					}

					if (cnt == 2) {
						String next = "..";
						for (int k = 0; k < s.length() / 2; k++) {
							if (k > 0) {
								if (k % 2 == 0) {
									next += "..";
								} else {
									next += "##";
								}
							}
						}
						System.out.println(next);
					}
					if (cnt == 3) {
						cnt = -1;
						String next = "..";
						for (int k = 0; k < s.length() / 2; k++) {
							if (k > 0) {
								if (k % 2 == 0) {
									next += "..";
								} else {
									next += "##";
								}
							}
						}
						System.out.println(next);
					}

					cnt++;
				}
			}
		}
	}
}
