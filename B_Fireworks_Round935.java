import java.util.Scanner;

public class B_Fireworks_Round935 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		long nTest = scanner.nextInt();
		while (nTest > 0) {
			long nTotalSumAFireworkMinutes = 0;
			long nTotalSumBFireworkMinutes = 0;
			long nTotalSum = 0;
			long nAFireworkMinutes = scanner.nextLong();
			long nBFireworkMinutes = scanner.nextLong();
			long nMFireworkTimeVisibleInSky = scanner.nextLong();
			nTotalSumAFireworkMinutes = (nAFireworkMinutes + nMFireworkTimeVisibleInSky) / nAFireworkMinutes;
			nTotalSumBFireworkMinutes = (nBFireworkMinutes + nMFireworkTimeVisibleInSky) / nBFireworkMinutes;
			nTotalSum = nTotalSumAFireworkMinutes + nTotalSumBFireworkMinutes;

			System.out.println(nTotalSum);

			nTest--;
		}
	}
}