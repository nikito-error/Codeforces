import java.util.Scanner;

public class A_SettingUpCamp_Round935 {

	static Scanner scanner = new Scanner(System.in);

    public static int calculateIntroverts(int nIntroverts, int nExtroverts, int nUniversal) {
        int nTotalTents = nIntroverts; // Initialize with the number of introverts

        nTotalTents += nExtroverts / 3; 
        nExtroverts %= 3; 

        
        if (nExtroverts == 1) {
            nUniversal -= 2;
            nTotalTents+=1;
        } else if (nExtroverts == 2) {
            nUniversal -= 1;
            nTotalTents+=1;
        }

        if (nUniversal < 0) {
            return -1; 
        }

        nTotalTents += Math.ceil((double) nUniversal / 3);

        return nTotalTents;
    }

    public static void main(String args[]) {
        int nTestCases = scanner.nextInt();
        for (int t = 0; t < nTestCases; t++) {
            int nIntroverts = scanner.nextInt();
            int nExtroverts = scanner.nextInt();
            int nUniversal = scanner.nextInt();

            int result = calculateIntroverts(nIntroverts, nExtroverts, nUniversal);
      
            System.out.println(result);
        }

    }
}
